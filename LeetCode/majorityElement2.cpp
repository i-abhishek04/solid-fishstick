#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkMajority(vector<int>& nums, int ans){
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ans)
                cnt++;
        }
        if(cnt>nums.size()/3)   return true;
        return false;
    }
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int m1=nums[0],m2;
        int cnt=1;
        for(int i=1;i<nums.size();i++){
            if(cnt==0){
                m1=nums[i];
                cnt=1;
                continue;
            }
            if(m1==nums[i]) cnt+=2;
            else{
                cnt--;
            }
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=m1&&cnt==0){
                m2=nums[i];
                cnt=1;
                continue;
            }
            if(m2==nums[i]) cnt+=2;
            else{
                cnt--;
            }
        }
        cout<<m1<<" "<<m2<<endl;
        if(checkMajority(nums,m1)) ans.push_back(m1);
        if(m1!=m2)
        if(checkMajority(nums,m2)) ans.push_back(m2);
        return ans;
        
    }
};

int main()
{
    Solution s;
    int m,n,t;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    s.majorityElement(v);
    
    return 0;
}