#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void printArray(vector<int> nums, int siz)
{
    for (int i = 0; i < siz; i++)
        cout << nums[i] << " ";
    cout << endl;
}

void bubbleSort(vector<int> nums, int siz)
{
    for (int i = 0; i < siz - 1; i++)
    {
        for (int j = 0; j < siz - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }
    cout<<"using bubble sort"<<endl;
    printArray(nums, siz);
}

void selectionSort(vector<int> nums, int siz)
{
    for (int j = 0; j < siz - 1; j++)
    {
        int min = nums[j], temp, minind = j;
        for (int i = j; i < siz; i++)
        {
            if (nums[i] < min)
            {
                min = nums[i];
                minind = i;
            }
        }
        temp = nums[j];
        nums[j] = min;
        nums[minind] = temp;
    }
    cout<<"using selection sort"<<endl;
    printArray(nums, siz);
}

void insertionSort(vector<int> nums, int siz)
{
    for (int i = 0; i < siz - 1; i++)
    {
        int j = i + 1;
        while (nums[j] < nums[j - 1] && j > 0)
        {
            swap(nums[j - 1], nums[j]);
            j--;
        }
    }
    cout<<"using insertion sort"<<endl;
    printArray(nums, siz);
}

int takeInput(vector<int> &nums)
{
    int siz, t;
    cout << "enter number of elements in array: ";
    cin >> siz;
    cout << "enter array elements" << endl;
    for (int i = 0; i < siz; i++)
    {
        cin >> t;
        nums.push_back(t);
    }
    cout<<"the input array is"<<endl;
    printArray(nums,siz);
    return siz;
}

int main()
{
    vector<int> nums;
    int siz = takeInput(nums);
    cout << "select one of the following:" << endl;
    cout << "Bubble sort : b" << endl;
    cout << "Selection sort : s" << endl;
    cout << "Insertion sort : i" << endl;
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'b':
        bubbleSort(nums, siz);
        break;

    case 's':
        selectionSort(nums, siz);
        break;

    case 'i':
        insertionSort(nums, siz);
        break;

        default:
        break;
    }

    return 0;
}