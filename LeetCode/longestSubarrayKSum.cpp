//not correct

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int lengthOfLongestSubarray(vector<int>& nums, int k){
            int siz=nums.size();
            int i=0,j=0;
            int ans=-1,sum=0;
            while(j<siz){
                sum+=nums[j];
                if(sum<k){
                    j++;
                }
                else if(sum>k){
                    sum-=nums[i];
                    i++;
                }
                if(sum==k) ans=max(ans,j-i+1);
                // j++;
            }
            return ans;
        }
};

int main()
{
    Solution s;
    int k,n,t;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }

    cout<<s.lengthOfLongestSubarray(v,k);

    
    return 0;
}