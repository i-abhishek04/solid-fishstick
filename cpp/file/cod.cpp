#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
    cin>>t;
	while(t--){
        cin>>n;
        if(n==0) cout<<"1"<<endl;
        // else if(n==1) cout<<"3"<<endl;
        // else if(n==2) cout<<"6"<<endl;
        else cout<<n*3<<endl;
	}
	return 0;
}