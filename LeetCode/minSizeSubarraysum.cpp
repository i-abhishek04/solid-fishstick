#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      long long sum=0;
      int ans=INT_MAX;
      int siz=nums.size(),i=0,j=0;
      while(j<=siz){
        //   j++;
          if(sum>=target){
              sum-=nums[i];
              i++;
              ans=min(ans,j-i+1);
          }
          else 
          {
            j++;
            sum+=nums[j];

          }
          
      }  return ans;
    }
};

int main(){
    Solution s;
    vector<int> a={1,1,1,1,1,1,1,1};
    cout<<s.minSubArrayLen(11,a);
    return 0;
}