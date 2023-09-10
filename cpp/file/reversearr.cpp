#include <iostream>

using namespace std;

int main()
{
    int n;
    int* first,*last;
    cout<<"Enter number : ";
    cin>>n;
    int* arr= new int[n];
    cout<<"Enter elements\n";
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    cout<<"given array\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    first=arr;
    last=&arr[n-1];
    
    // int f=0,l=n-1;
    int temp;
    
    while(first<last)
    {
        temp=*first;
        *first=*last;
        *last=temp;
        first++;
        last--;
    }
    
    // while(f<l){
    //     temp=arr[f];
    //     arr[f]=arr[l];
    //     arr[l]=temp;
    //     f++;
    //     l--;
    // }
    cout<<"reverse\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}