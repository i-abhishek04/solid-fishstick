#include<stdio.h>
#include<stdlib.h>

void selection(int *arr, int n){
    for(int j=0;j<n-1;j++){
        int min=arr[j],temp,minind=j;
        for(int i=j;i<n;i++){
            if(arr[i]<min)
                {min=arr[i];
                minind=i;}
        }
        temp=arr[j];
        arr[j]=min;
        arr[minind]=temp;
        // min=__INT_MAX__;
    }
}


int main()
{
    int n;
    printf("Enter no of elements : ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("%d element : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Before sorting\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    selection(arr,n);
    printf("\nAfter sorting\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}