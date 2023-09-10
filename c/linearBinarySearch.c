#include <stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
    mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    // Unsorted array
    // int arr[10] = {2, 4, 6, 8, 9, 23, 54, 65, 42, 75};
    int arr[] = {1, 3, 5, 7, 9, 12, 14, 16, 27, 30};
    int size = sizeof(arr) / sizeof(int);
    int elem;
    display(arr, size);
    printf("Enter the element to search: ");
    scanf("%d", &elem);
    // int res = linearSearch(arr, size, elem);
    int res = binarySearch(arr, size, elem);
    if (res == -1)
    {
        printf("Element not found!");
    }
    else
    {
        printf("Element found at index %d", res);
    }
    return 0;
}