#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigitOne(int n) {
        if(n<=0) return 0;
        if(n==1) return 1;
        int total=countDigitOne(n-1);
        int count=0;
        while(n){
            if(n%10==1) count++;
            n/=10;
        }
        return count+total;
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    cout<<s.countDigitOne(n);
    
    return 0;
}