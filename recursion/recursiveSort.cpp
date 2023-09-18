#include <iostream>
#include<vector>

using namespace std;

void Sort(vector<int>& nums, int siz){
   if(siz==1) return;
   Sort(nums,siz-1);
   int i=siz-1;
   while(nums[i]<nums[i-1]){
    swap(nums[i],nums[i-1]);
    i--;
   }
}

int main()
{
    int n,t;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    
    Sort(v,n);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    

    return 0;
}