#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int max=0;
	    int count = 0;
	    cin>>n;
	    int *arr = new int[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        if(arr[i]>max){
	            max=arr[i];
	            count=0;
	        }
	        if(arr[i]==max){
	            count++;
	        }
	    }
	    if(count%2==0){
	        cout<<"Marichka"<<endl;
	    }
	    else cout<<"Zenyk"<<endl;
	    
	}
	return 0;
}
