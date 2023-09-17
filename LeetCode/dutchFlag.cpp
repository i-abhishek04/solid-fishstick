#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)   mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
                // mid++;
            }
        }
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

    s.sortColors(v);
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}