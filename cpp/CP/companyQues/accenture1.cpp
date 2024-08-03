#include<bits/stdc++.h>
using namespace std;

void pool(vector<int>& nums){
    int i=0,j=0;
    int siz=nums.size();
    while(j<siz){
        while(nums[i]%2==0) i++;
        j=i+1;
        while(nums[j]%2!=0) j++;
        swap(nums[i],nums[j]);
    }
}

int main(){
    vector<int> nums={1,2,4,6,7,5,9,11,16,3};
    pool(nums);
    for(int x:nums){
        cout<<x<<" ";
    }
    cout<<endl;
}