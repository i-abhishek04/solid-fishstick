#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void del(int arr[], int index, int size)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[50] = {1, 3, 5, 23, 53, 43};
    int size = 6, index;
    display(arr, size);
    printf("Enter the index of element to delete: ");
    scanf("%d", &index);
    del(arr, index, size);
    size -= 1;
    printf("The array after modification is\n");
    display(arr, size);
    return 0;
}