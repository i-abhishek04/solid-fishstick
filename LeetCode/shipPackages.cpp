#include<bits/stdc++.h>

using namespace std;

class Solution {
    private:
        bool possible(vector<int>& weights, int& capacity, int& days){
            int total=0, day=0;
            for(int i=0;i<weights.size();i++){
                if(weights[i]>capacity) return false;
                total+=weights[i];
                if(total>capacity){
                    day++;
                    total=weights[i];
                    if(day>days) return false;
                }
            }
            if(total<=capacity) day++;
            if(day<=days) return true;
            return false;
        }

    public:
        
        int shipWithinDays(vector<int>& weights, int days) {
            int low= *max_element(weights.begin(),weights.end());
            int high=0,mid;
            for(int i=0;i<weights.size();i++){
                high+=weights[i];
            }
            while(low<=high){
                mid=(low+high)/2;
                if(possible(weights,mid,days))
                    high=mid-1;
                else
                    low=mid+1;
            }
            return low;
        }
};

int main(){
    Solution s;
    int n,t;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    int days;
    cin>>days;
    cout<<s.shipWithinDays(v,days);
    return 0;
    
}