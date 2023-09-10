#include<stdio.h>
#include<stdlib.h>

void printArray(int * arr, int size){
    printf("The array is :\nloc ");
    for(int i=0; i<size; i++)
    printf("%5d",i);
    printf("\nele ");
    for(int i=0; i<size; i++)
    printf("%5d",arr[i]);
    
    printf("\n");
}

void input(int* arr, int size){
     for(int i =0; i<size; i++)
    {
        printf("Enter element %d : ",i);
        scanf("%d",&arr[i]);
    }
}

void insertAt(int *arr, int* size, int ele, int loc)
{
    for(int i=*(size); i>=loc; i--){
        arr[i+1]=arr[i];
    }
    arr[loc]=ele;
    *size=*(size)+1;
}

void deleteAt(int* arr, int*size, int loc){
    for(int i=loc; i<*(size); i++)
        arr[i]=arr[i+1];
    *size=*(size)-1;
}
int main()
{
    int n,size,loc,ele;
    printf("Enter max size of array : ");
    scanf("%d",&n);
    int* arr= (int *)malloc(n*sizeof(int));
    printf("Enter size of array : ");
    scanf("%d",&size);
    input(arr, size);
    printArray(arr, size);
    printf("Enter the element and the location at which u want to insert : ");
    scanf("%d%d",&ele,&loc);
    insertAt(arr, &size, ele, loc);
    printArray(arr, size);
    printf("Enter the location at which you want to delete : ");
    scanf("%d",&loc);
    deleteAt(arr, &size, loc);
    printArray(arr, size);
    free(arr);
    return 0;
}