#include <iostream>
#include<vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int n=nums.size();
    if(n==1) return 0;
    if(nums[0]>nums[1]) return 0;
    if(nums[n-2]<nums[n-1]) return n-1;
    int low=1,high=n-2,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]>nums[mid+1]&&nums[mid-1]<nums[mid]) 
            return mid;
        else if(nums[mid]<nums[mid+1])
            low=mid+1;
        else
            high=mid;
    }
    return mid;
}


int main()
{
    int n,t;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    cout<<findPeakElement(v)<<endl;

    return 0;
}