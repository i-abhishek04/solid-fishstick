#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int helper(int n, int k){
        if(n==1) return 0;
        // int bit=helper(n-1,(int)ceil(k/2.0));
        // if(k%2==1) return bit;
        // return !bit;
        int mid = pow(2,n-2);
        if(k<=mid) return helper(n-1,k);
        return !helper(n-1,k-mid);
    }
public:
    int kthGrammar(int n, int k) {
        return helper(n,k);
    }
};
//0
//01
//0110
//01101001
//0110100110010110
//01101001100101101001011001101001

int main()
{
    Solution s;
    int n,k;
    cin>>n>>k;
    cout<<s.kthGrammar(n,k);   
    return 0;
}