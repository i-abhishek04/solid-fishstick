#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print(vector<int>& arr, int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void sel(vector<int>& arr, int n){
    for(int i=0;i<n-1;i++){
        int j=i+1;
        while(arr[j]<arr[j-1]&&j>0){
            swap(arr[j-1],arr[j]); // swap(arr[j-1],arr[j--]); is wrong
            j--;
        }
        // cout<<j<<" ";
        // print(arr,n);
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
    sel(v,n);
    print(v,n);

    return 0;
}