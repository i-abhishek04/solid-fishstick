#include <stdio.h>
void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int ins(int arr[], int num, int index, int size, int capacity)
{
    if (size >= capacity)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = num;
        return 1;
    }
}
int main()
{
    int arr[50] = {1, 2, 4, 7, 86};
    int num, index, size = 5, capacity = 50;
    show(arr, size);
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    printf("Enter the index at which to insert: ");
    scanf("%d", &index);
    int tof = ins(arr, num, index, size, capacity);
    size += 1;
    if (tof == 1)
    {
        printf("Item inserted\n");
        show(arr, size);
    }
    return 0;
}