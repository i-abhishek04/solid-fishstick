#include<bits/stdc++.h>
using namespace std;

vector<int> missingAndRepeatingNumbers(vector<int>& nums){
    int siz = nums.size();
    long long Sn = (siz*(siz+1))/2;
    long long S2n = (siz*(siz+1)*(2*siz+1))/6;
    long long S = 0, S2 = 0;
    for(int i= 0;i<siz;i++){
        S += nums[i];
        S2 += (long long)nums[i]* (long long)nums[i];
    }
    long long val1 = S - Sn;
    long long val2 = S2 - S2n;
    val2 = val2 / val1;
    long long x = (val1 + val2)/2;
    long long y = x - val1;
    return {(int)x, (int)y};

}

int main()
{
    // Solution s;
    int m,n,t;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }

    vector<int> ans=missingAndRepeatingNumbers(v);
    cout<<"Repeating = "<<ans[0]<<endl<<"Missing   = "<<ans[1];

    return 0;
}