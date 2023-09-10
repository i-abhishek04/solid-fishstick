#include<stdio.h>
void printArray(int *A, int n){
    for(int i = 0; i<n ;i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void insertionSort(int *A, int n)
{
    int key, j;
    for (int i = 1; i < n-1; i++)
    {
        // printf("Working on pass number %d \n", i);
        key = A[i];
        j = i-1;
        while (j>=0 && A[j] > key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
        
    }
    
}

int main(){
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
    printf("The Array before sorting is \n");
    printArray(A, n); // Printing before sorting
    insertionSort(A, n); // Sorting
    printf("The Array after sorting is \n");
    printArray(A ,n); // Printing after sorting
    return 0;
}