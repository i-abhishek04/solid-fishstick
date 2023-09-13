#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0,high=arr.size()-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]-(mid+1)<k)
                low=mid+1;
            else
                high=mid-1;
        }
        return low+k;
    }
};

int main()
{
    Solution s;
    int n,t;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    int k;
    cin>>k;
    cout<<s.findKthPositive(v,k);
    
    return 0;
}