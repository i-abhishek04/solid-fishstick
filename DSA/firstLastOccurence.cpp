#include <iostream>

using namespace std;

int firstOccur(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1;
    mid = s + (e - s) / 2;
    while (s < e)
    {
        cout << "first" << endl;
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
            // mid = s + (e - s) / 2;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
            // mid = s + (e - s) / 2;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    ans = mid;
    return ans;
}

int lastOccur(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1;
    mid = s + (e - s) / 2;
    while (s < e)
    {
        cout << "last" << endl;
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
            // mid = s + (e - s) / 2;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
            // mid = s + (e - s) / 2;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    ans = mid;
    return ans;
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%3d ", arr[i]);
    cout << endl;
}

void input(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int main()
{
    int arr[30];
    int n, e;
    cout << "Enter the number of elements in array : ";
    cin >> n;
    cout << "Enter the elements of array in a non-decreasing manner" << endl;
    input(arr, n);
    cout << "You entered" << endl;
    print(arr, n);
    cout << "Enter the element to find first and last occurence and its frequency : ";
    cin >> e;
    int f = firstOccur(arr, n, e);
    int l = lastOccur(arr, n, e);
    cout << "First appearance of " << e << " is " << f << endl;
    cout << "Last appearance of " << e << " is " << l << endl;
    cout << "Frequency of " << e << " is " << (l - f + 1) << endl;

    return 0;
}