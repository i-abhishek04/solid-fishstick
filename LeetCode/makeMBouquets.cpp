#include<iostream>
#include<vector>
#include<cmath>
#include<climits>

using namespace std;

int mini(const vector<int>& bloomDay,int siz){
    int ans=INT_MAX;
    for(int i=0;i<siz;i++)
        if(ans>bloomDay[i])
            ans=bloomDay[i];
    return ans;
}

int maxi(const vector<int>& bloomDay,int siz){
    int ans=INT_MIN;
    for(int i=0;i<siz;i++)
        if(ans<bloomDay[i])
            ans=bloomDay[i];
    return ans;
}

int currAns(vector<int>& bloomDay, const int& mid, const int&k){
    int ans=0,count=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            count++;
            if(count==k){
                ans++;
                count=0;
            }

        }
        else    count=0;
    }
    return ans;
}

int minDays(vector<int>& bloomDay, int m, int k) {
    int siz=bloomDay.size();
    if(m*k>siz) return -1;
    int low=mini(bloomDay,siz),high=maxi(bloomDay,siz);
    cout<<"low:"<<low<<" "<<"high:"<<high<<endl;
    int mid,ans;
    while(low<=high){
        ans=0;
        mid=low+(high-low)/2;
        cout<<"mid:"<<mid<<endl;
        ans=currAns(bloomDay,mid,k);
        cout<<"ans:"<<ans<<endl;
        if(ans<m){
            low=mid+1;
        }
        else
            high=mid-1;
        
        cout<<"low:"<<low<<" "<<"high:"<<high<<endl;
    }
    return low;
}


int main(){
    int n,t;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    int m,k;
    cin>>m>>k;
    cout<<minDays(v,m,k);
    return 0;
}