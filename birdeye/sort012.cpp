#include <bits/stdc++.h>

// []{}

void dutchFlag(std::vector<int> &arr) {
    int low=0,mid=0,high=arr.size()-1;
    while (mid <= high)
    {
        if (arr[mid] ==0)   
        {
            std::swap(arr[mid], arr[low]);
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
         else
         {
            std::swap(arr.at(mid),arr.at(high));
            high--;
        }
        if(low>mid) mid=low;
    }
}


// using namespace std;

int main()
{
    std::vector<int> arr;
    int n,temp;
    std::cout<<"enter number of elements in array: ";
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        std::cin>>temp;
        arr.push_back(temp);
    }
    dutchFlag(arr);
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr.at(i)<<" ";
    }
    std::cout<<"\n";

    return 0;
}