#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        vector<int> temp=intervals[0];
        for(int i=1;i<intervals.size();i++){
            if(temp[1]>=intervals[i][0]){
                if(temp[1]<intervals[i][1])temp[1]=intervals[i][1];
            }
            else{
                ans.push_back(temp);
                temp=intervals[i];
            }
        }
        ans.push_back(temp);
        return ans;
    }
};

int main()
{
    Solution s;
    int n,t1,t2;
    cin>>n;
    vector<vector<int>> v;
    for(int i =0;i<n;i++){
        cin>>t1>>t2;
        vector<int> temp;
        temp.push_back(t1);
        temp.push_back(t2);
        v.push_back(temp);
    }

    vector<vector<int>> ans = s.merge(v);
    for(const auto& intervals : ans)
        cout<<"("<<intervals[0]<<","<<intervals[1]<<") ";
    
    return 0;
}