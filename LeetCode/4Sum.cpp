#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        int siz=nums.size();
        for(int i=0;i<siz;i++){
            for(int j=i+1;j<siz;j++){
                set<long long> s;
                for(int k=j+1;k<siz;k++){
                    long long fourth=target-(nums[i]+nums[j]+nums[k]);
                    if(s.find(fourth)!=s.end()){
                        vector<int> temp={nums[i],nums[j],(int)fourth,nums[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    else{
                        s.insert(nums[k]);
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};

int main()
{
    Solution s;
    int m,n,t;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    vector<vector<int>> res=s.fourSum(v,m);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<4;j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}