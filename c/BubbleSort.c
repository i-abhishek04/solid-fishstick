#include<stdio.h>
void printArray(int *A, int n){
    for(int i = 0; i<n ;i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSortAdaptive(int* A, int n){
    int temp;
    int isSorted = 0;
    for(int i=0; i<n-1; i++)  //For numer of passes
    {
        printf("Working on pass number %d \n", i+1);
        isSorted = 1;
        for(int j=0; j<n-1-i; j++)  // For swapping
        {
            if(A[j]>A[j+1])
            {
            temp = A[j];
            A[j] = A[j+1];
            A[j+1]=temp;
            isSorted = 0;
            }
        }
        if (isSorted)
        return;
    }
    }
int main()
{

    //int A[] = {12, 43, 45, 65, 94, 7};
    int n, A[n];
    // int A[]={1,2,3,4,5,6};
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("The Array before sorting is ");
    printArray(A, n); // Printing before sorting
    bubbleSortAdaptive(A, n); // Sorting
    printf("The Array after sorting is ");
    printArray(A ,n); // Printing after sorting
    return 0;
}