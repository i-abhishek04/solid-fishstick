//not correct

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        if(n<m) return findMedianSortedArrays(nums2,nums1);
        int total=m+n;
        int half=total/2;
        int low=0,high=m-1;
        int mid;
        int l1=INT_MIN,l2=INT_MIN,r1=INT_MAX,r2=INT_MAX;
        while(true){
            mid=(low+high)/2;

            if(mid==half)
            
            if(nums1[mid]<=nums2[half-mid]&&nums2[half-mid-1]<=nums1[mid+1]){
                l1=mid;
                l2=half-mid-1;
                r1=mid+1;
                r2=half-mid;
                break;
            }
            else if(nums1[mid]>nums2[half-mid])
                high=mid-1;
            else
                low=mid+1;
        }
        if(total%2==0)
            return (double)(max(nums1[l1],nums2[l2])+min(nums1[r1],nums2[r2]))/2;
        else
            return (double)min(nums1[r1],nums2[r2]);
    }
};

int main()
{
    Solution s;
    int m,n,t;
    cin>>m>>n;
    vector<int> v1,v2;
    for(int i=0;i<m;i++){
        cin>>t;
        v1.push_back(t);
    }
    for(int i=0;i<n;i++){
        cin>>t;
        v2.push_back(t);
    }

    cout<<s.findMedianSortedArrays(v1,v2);

    
    return 0;
}