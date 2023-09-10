#include <iostream>

using namespace std;

void alternateswap(int arr[], int size)
{
    int f=0;
   
    while(f<size-1){
        swap(arr[f], arr[f+1]);
        f += 2;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int arr[]= {2, 4, 1, 6, 7, 9, 10};

    cout<<"Array before modification "<< endl;
    printArray(arr, 7);

    alternateswap(arr, 7);

    cout<<"Array after modification "<< endl;
    printArray(arr, 7);

    return 0;
}