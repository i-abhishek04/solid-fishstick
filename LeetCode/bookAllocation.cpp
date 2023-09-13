#include<bits/stdc++.h>
using namespace std;


int isPossible(vector<int>& arr, int n, int m, int pages){
    int totalPages=0,student=1;
    for(int i=0;i<n;i++){
        if(totalPages+arr[i]<=pages){
            totalPages+=arr[i];
        }
        else{
            student++;
            totalPages=arr[i];
        }
    }
    // if(totalPages<=pages) student++;   what a fucking idiotic misake i did
    cout<<student<<endl;
    return student;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(n<m) return -1;
    int low= *max_element(arr.begin(), arr.end());
    int high= accumulate(arr.begin(), arr.end(), 0);
    int min=low;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        cout<<"low:"<<low<<" mid:"<<mid<<" high:"<<high<<endl;
        if(m>=isPossible(arr,n,m,mid))
            high=mid-1;
        else
            low=mid+1;
    }
    if(low<min) return -1;
    return low;
}


int main()
{
    // Solution s;
    int n,t,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    cout<<findPages(v,n,m);
    
    return 0;
}