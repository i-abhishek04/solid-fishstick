#include<stdio.h>

void sort(int *arr, int size){
    if(size==1) return;
    sort(arr, size-1);
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[size-1]){
            int temp=arr[size-1];
            for(int j=size-1;j>=i;j--){
                arr[j]=arr[j-1];

            }
            arr[i]=temp;
            break;
        }
    }
}

int main()
{
    int a[]={5,1,6,3,4,9,7};
    sort(a,7);
    for(int i=0;i<7;i++)
        printf("%d ",a[i]);
    printf("\n");
    
    return 0;
}