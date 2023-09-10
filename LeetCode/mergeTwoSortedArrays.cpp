#include <iostream>
#include<vector>

using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(i<m||j<n){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                for(int k=m+n-1;k>i;k--)
                    nums1[k]=nums1[k-1];
                nums1[++i]=nums2[j];
                i<m?i++:i;
                j<n?j++:j;
                for(int k=0;k<m+n;k++)
                    cout<<nums1[k]<<" ";
            }
        }
    }
};
int main()
{
    vector<int> n1;//{1,2,3};
    n1.push_back(1);
    n1.push_back(2);
    n1.push_back(3);
    for(int i=0;i<n1.size();i++)
        cout<<n1[i]<<" ";
    cout<<endl;
    vector<int> n2;//={2,5,6};
    n2.push_back(2);
    n2.push_back(5);
    n2.push_back(6);
    for(int i=0;i<n2.size();i++)
        cout<<n2[i]<<" ";
    cout<<endl;
    Solution s;
    s.merge(n1,6,n2,3);
    for(int i=0;i<n1.size();i++)
        cout<<n1[i]<<" ";
    cout<<endl;

    return 0;
}