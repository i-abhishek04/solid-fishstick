#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPossible(vector<int>& nums, int n){
        int sum=0,parts=1;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=n)
                sum+=nums[i];
            else{
                parts++;
                sum=nums[i];
            }
        }
        return parts;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(k>=isPossible(nums,mid))
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};

int main()
{
    Solution s;
    int n,t,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    cout<<s.splitArray(v,k);
    
    return 0;
}