//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void helper(vector<int>& v,int index, int k){
        if(v.size()==1) return;
        // cout<<index<<" "<<v[index]<<endl;
        // cout<<v[(index+k)%v.size()]<<endl;
        index=(index+k)%v.size();
        v.erase(v.begin()+index);
        helper(v,index,k);
    }
    int safePos(int n, int k) {
        vector<int>v(n);
        iota(v.begin(),v.end(),1);
        helper(v,0,k-1);
        return v[0];
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends