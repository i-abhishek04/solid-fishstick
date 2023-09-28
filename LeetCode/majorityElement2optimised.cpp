#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool majority(vector<int>&nums, int ele){
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele)
            cnt++;
            if(cnt>nums.size()/3) return true;
        }
        return false;
    }
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int siz=nums.size();
        int cnt1=0,cnt2=0;
        int el1=INT_MIN,el2=INT_MIN;
        for(int i=0;i<siz;i++){
            if(cnt1==0&&el2!=nums[i]){
                el1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0&&el1!=nums[i]){
                el2=nums[i];
                cnt2=1;
            }
            else if(nums[i]==el1) cnt1++;
            else if(nums[i]==el2) cnt2++;
            else{
                cnt1--,cnt2--;
            }
        }
        if(majority(nums,el1)) ans.push_back(el1);
        if(majority(nums,el2)) ans.push_back(el2);
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
    vector<int> ans=s.majorityElement(v);
    for(auto i:ans)
        cout<<i<<endl;
    
    return 0;
}