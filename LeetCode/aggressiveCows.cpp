#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& stalls,int& distance, int cows){
    sort(stalls.begin(),stalls.end());
    cows--;
    int in=0;
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-stalls[in]>=distance){
            in=i;
            cows--;
        }
        if(cows==0) return true;
    }
    return false;
}
int minDistanceMax(vector<int>& stalls, int cows){
    int low= 1,high = *max_element(stalls.begin(),stalls.end());
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(isPossible(stalls,mid,cows))
            low=mid+1;
        else    
            high=mid-1;
    }
    return high;
}

int main()
{
    int n,t;
    int cows;
    cin>>n>>cows;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    cout<<minDistanceMax(v,cows);
    return 0;
}