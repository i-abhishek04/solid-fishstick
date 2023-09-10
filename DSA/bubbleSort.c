#include<stdio.h>
#include<stdlib.h>

void printArray(int*, int);
void swap(int*, int*);
void sort(int*, int);

void printArray(int * arr, int s){
    // printf("The array is :\nloc ");
    // for(int i=0; i<size; i++)
    // printf("%5d",i);
    // printf("\nele ");
    for(int i=0; i<s; i++)
    printf("%5d",arr[i]);
    
    printf("\n");
}

/// @brief 
/// @param a 
/// @param b 
void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int* arr, int si){
    for(int i=0 ; i<si-1; i++){
        for(int j=0; j<si-i-1; j++){
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
        printf("After pass%d:",i+1);
        printArray(arr,si);
    }
}

int main()
{
    
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int *arr=(int *) malloc(size*sizeof(int));
    // int arr[10];
    for(int i = 0; i<size; i++){
        printf("Enter element %d : ",i);
        scanf("%d",&arr[i]);
    }
    printArray(arr,size);
    sort(arr,size);
    return 0;
}