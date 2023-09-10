#include <iostream>

using namespace std;

int sumOfElem(int arr[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[]={2, 4, 3, 5, 6, 7, 2, 12};
    cout << "Sum of all elements is "<< sumOfElem(arr, 8);

    return 0;
}