#include<stdio.h>
#include<stdlib.h>

void insertion(int *arr, int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                arr[j+1]=temp;
                break;
            }    
        }
        
    }
}

int main()
{
    int arr[]={1,4,11,15,7,6,9,3};
    int s=sizeof(arr)/sizeof(int);
    printf("\nBefore\n");
    for(int i=0;i<s;i++)
        printf("%d ",arr[i]);
    insertion(arr,s);
    printf("\nAfter\n");
    for(int i=0;i<s;i++)
        printf("%d ",arr[i]);
    return 0;
}