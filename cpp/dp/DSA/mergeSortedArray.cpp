#include <iostream>
#include<vector>
using namespace std;

vector<int> merge(int arr[], int n, int arr2[], int m){
    vector<int> ans;
    int i=0,j=0;
    while (i<n||j<m)
    {
        if(arr[i]<arr2[j]){
            ans.push_back(arr[i]);   
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    return ans;
    
}


int main()
{
    int arr[5]={1,3,5,7,9};
    int arr2[4]={2,4,6,8};
    vector<int> ans=merge(arr, 5, arr2, 4);
    for(int i =0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}