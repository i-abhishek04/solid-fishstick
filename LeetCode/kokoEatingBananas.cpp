#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int hour(vector<int> &piles, int& nob, int& h){
    float total=0;
    for(int i=0;i<piles.size();i++){
        if(h<total) return -1;
        total+=ceil((double)piles[i]/nob);
    }
    return (int)total;
}

int minBananas(vector<int> &piles, int hours)
{
    int siz = piles.size();
    int min = 1, mid, total = 0;
    int max = piles[0];
    for (int i = 0; i < siz; i++)
    {
        if (piles[i] > max)
            max = piles[i];
    }
    while (min <= max)
    {
        mid = (min + max) / 2;
        total=hour(piles,mid,hours);
        if(total<=hours&&total!=-1)
            max=mid-1;
        else
            min=mid+1;
    }
    return min;
}

int main()
{
    int n, t, hours;
    cin >> n;
    vector<int> piles;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        piles.push_back(t);
    }
    cin >> hours;
    cout << minBananas(piles, hours);
    return 0;
}