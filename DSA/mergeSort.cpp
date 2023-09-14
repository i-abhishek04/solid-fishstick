#include <iostream>
#include <vector>

using namespace std;
void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void merge(vector<int> &arr, int low, int mid, int high)
{
    int first = low, second = mid + 1;
    vector<int> temp;
    while (first <= mid && second <= high)
    {
        if (arr[first] <= arr[second])
        {
            temp.push_back(arr[first]);
            first++;
        }
        else
        {
            temp.push_back(arr[second]);
            second++;
        }
    }

    while (first <= mid)
    {
        temp.push_back(arr[first]);
        first++;
    }
    while (second <= high)
    {
        temp.push_back(arr[second]);
        second++;
    }

    for (int i = low; i <= high; i++)
        arr[i] = temp[i - low];
}

void mS(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int n, t;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        arr.push_back(t);
    }
    mS(arr, 0, n - 1);
    print(arr, n);
    return 0;
}