//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void subsequences(const string& str,string ans,int i, map<string,int>& mp){
      if(!mp[ans]) mp[ans]++;
      if(i>=str.length()) return;
      subsequences(str,ans,i+1,mp);
      subsequences(str,ans+str.at(i),i+1,mp);
        
  }
    string betterString(string str1, string str2) {
        // code here
        string ans="";
        map<string,int> mp;
        subsequences(str1,ans,0,mp);
        int t1=mp.size();
        mp.clear();
        subsequences(str2,ans,0,mp);
        int t2=mp.size();
        if(t1>=t2) return str1;
        return str2;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends