#include<iostream>
#include<vector>
using namespace std;

class Solution {
     public:
    int search(vector<int>& nums, int target) {
    int i=0;
    int l=nums.size()-1;
    int m;
    while(i<=l){
        int m=(i+l)/2;

        if(nums[m]==target)
        return m;

        if(nums[i]==nums[m] && nums[m]==nums[l]){
            i++;l--;
            continue;
            }
      
        if(nums[i] <= nums[m] ){
           if(target >= nums[i] && target <= nums[m])
             l=m-1;
           else{
               i=m+1;
           }
        }
        else{
            if(target>=nums[m] && target <=nums[l])
            i=m+1;
            else l=m-1;
        }
    }
    return -1;
    }
 };

 int main(){
    Solution s;
    vector<int> v={2,1,0,0,5,6};
    cout<<s.search(v,6);
    return 0;
 }