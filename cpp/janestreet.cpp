#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
#include <queue>
#include <iostream>



typedef struct {
  float conversion_rate;
  std::string unit_to;  
} Edge;

using Fact = std::pair<std::string,std::pair<float, std::string>>;
using Query = std::pair<std::pair<float,std::string>, std::string>; 
using Graph = std::unordered_map<std::string,std::vector<Edge>>;

void parse_conversion_rate(const Fact& facts, Graph& graph) {
  const std::string& unit_from = facts.first;
  float rate = facts.second.first;
  const std::string& unit_to = facts.second.second;
  
  graph[unit_from].push_back({rate, unit_to});
  graph[unit_to].push_back({(float)1.0/rate, unit_from});
}

float answer_query( const Query& query, Graph& graph ) {
  std::unordered_map<std::string, bool> visited;
  
  std::string from_unit = query.first.second;
  float value = query.first.first;
  std::string to_unit = query.second;
  
  std::queue<std::pair<std::string,float>> bfs_q;
  bfs_q.push({from_unit, value});
  visited[from_unit] = true;
  
  std::string from;
  float val;
  
  while(!bfs_q.empty()) {
    from = bfs_q.front().first;
    val = bfs_q.front().second;
    bfs_q.pop();
    
    for(auto& it: graph[from]) {
      if(it.unit_to == to_unit) return val*it.conversion_rate;
      if(!visited[it.unit_to]) {
        bfs_q.push({it.unit_to, val*it.conversion_rate});
        visited[it.unit_to] = true;
      }
    }
  }
  
  return -1.0;
}


int main() {
  Graph graph;
  Fact f1, f2, f3, f4;
  f1.first = "min";
  f1.second.first = 60.0;
  f1.second.second = "sec";
  f2.first = "hr";
  f2.second.first = 60.0;
  f2.second.second = "min";
  f3.first = "mtr";
  f3.second.first = 100.0;
  f3.second.second = "cm";
  f4.first = "cm";
  f4.second.first = 10.0;
  f4.second.second = "mm";

  parse_conversion_rate(f1, graph);
  parse_conversion_rate(f2, graph);
  parse_conversion_rate(f3, graph);
  parse_conversion_rate(f4, graph);
  
  Query query, query2, query3, query4;
  query.first.first = 5.0;
  query.first.second = "hr";
  query.second = "sec";

  query2.first.first = 3.0;
  query2.first.second = "mtr";
  query2.second = "mm";

  query3.first.first = 1.0; 
  query3.first.second = "min";
  query3.second = "mm";

  query4.first.first = 10000;
  query4.first.second = "mm";
  query4.second = "mtr";

  std::cout << answer_query(query, graph)  << std::endl;
  std::cout << answer_query(query2, graph) << std::endl;
  std::cout << answer_query(query3, graph) << std::endl;
  std::cout << answer_query(query4, graph) << std::endl;
}

// m ----- 100 cm:
