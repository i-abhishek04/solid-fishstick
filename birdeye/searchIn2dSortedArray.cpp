#include<bits/stdc++.h>
using namespace std;
// []{}

pair<int,int> search2d(vector<vector<int>>& matrix, int num){
    int n=matrix.size();
    int m=matrix[0].size();

    // int low=0,high=(n*m)-1;
    // int mid;
    // int row,col;
    // while(low<=high){
    //     mid=low+(high-low)/2;
    //     row=mid/m;
    //     col=mid%m;
    //     if(matrix[row][col]==num) return {row,col};
    //     else if(matrix[row][col]<num) low=mid+1;
    //     else high = mid-1;
    // }

    int i=0,j=m-1;
    while (i < n && j >= 0)
    {
        if (matrix[i][j]==num)
            return {i, j};
        else if (matrix[i][j]<num)  j--;
        else    i++;
    }

    return {-1,-1};
}

int main(){
    int n,m,num;
    cout<<"enter number of rows: ";
    std::cin>>n;
    cout<<"enter number of columns: ";
    std::cin>>m;
    vector<vector<int>> matrix;
    cout<<"enter "<<n*m<<" elements in ascending order\n";
    int temp;
    for (int i = 0; i < n; i++)
    {
        vector<int> t;
        for (int j = 0; j < m; j++)
        {
            std::cin>>temp;
            t.push_back(temp);
        }
        matrix.push_back(t);
    }
    
            

    cout<<"enter the number to search: ";
    std::cin>>num;  
    pair<int,int> ans;
    ans=search2d(matrix,num);
    if(ans.first!=-1) cout<<num<<" found at index "<<ans.first<<","<<ans.second<<'\n';
    else cout<<num<<" not found\n";
    return 0;
}
