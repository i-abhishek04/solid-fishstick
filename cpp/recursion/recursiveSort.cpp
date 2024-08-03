#include <iostream>
#include<vector>

using namespace std;

void insert(vector<int>& nums, int ele){            //insertion at correct place function
    if(nums.size()==0||nums[nums.size()-1]<=ele){
        nums.push_back(ele);
        return;
    }
    int val=nums[nums.size()-1];
    nums.pop_back();
    insert(nums,ele);
    nums.push_back(val);
}

void sort(vector<int>& nums){           //insertion sort function
    if(nums.size()==1){
        return;
    }
    int ele=nums[nums.size()-1];
    nums.pop_back();
    sort(nums);
    insert(nums,ele);
}

void Sort(vector<int>& nums, int siz){          //recursive bubble sort
   if(siz==1) return;
   Sort(nums,siz-1);
   int i=siz-1;
   while(nums[i]<nums[i-1]&&i>0){
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
    
    // Sort(v,n);
    sort(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    

    return 0;
}