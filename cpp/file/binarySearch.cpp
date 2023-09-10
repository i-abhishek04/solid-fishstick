#include <iostream>

using namespace std;

int binary(int arr[], int size, int key)
{
	int low, mid, high;
	low = 0;
	high = size - 1;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(arr[mid] == key)
			return mid;
		else if(arr[mid]<key)
			low = mid +1;
		else
			high = mid -1;
	}
	return -1;
}

int main()
{
    int arr[]={1, 3, 6, 9, 29, 31, 37};
    int size = sizeof(arr)/sizeof(int);
    int element;

    for(int i=0; i<size; i++)
    {
	    cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the element to search : ";
    cin>>element;
    cout<<endl;

    int index = binary(arr, size, element);
    if(index!=-1)
    	cout<<"The Element "<< element << " is at index "<< index<<endl;
    else
	    cout<<"Element not in the array"<<endl;

    return 0;
}
