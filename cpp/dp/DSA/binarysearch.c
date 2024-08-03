#include<stdio.h>

int binSearch(int *arr,int size, int ele)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        printf("s%d m%d e%d\n",s,mid,e);
        if(ele==arr[mid])
            return mid;
        else if(ele<arr[mid])
            e=mid-1;
        else
            s=mid+1;
        mid=s+(e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[10]={12,15,17,20,22,25,27,35,40,50};
    printf("%d",binSearch(arr,10,27));
    return 0;
}