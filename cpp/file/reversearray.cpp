#include <iostream>

using namespace std;

void reverseArray(int arr[], int size)
{
    int f=0;
    int l=size - 1;
    while(f<l){
        swap(arr[f], arr[l]);
        f++;
        l--;
    }
}
int main()
{
    int arr[]={2, 4, 1, 6, 3, 9, 7};
    
    reverseArray(arr, 7);

    for(int i=0; i<7; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}