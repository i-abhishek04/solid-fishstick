#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>& arr, int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int partition(vector<int>& arr, int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot&&i<high)  i++;
        while(arr[j]>pivot&&j>low)    j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quicksort(vector<int>& arr,int low, int high){
    if(low<high){
        int parInd=partition(arr,low,high);
        quicksort(arr,low,parInd-1);
        quicksort(arr,parInd+1,high);
    }
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
    quicksort(v,0,n-1);
    print(v,n);

    return 0;
}