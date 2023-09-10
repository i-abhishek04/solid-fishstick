#include <stdio.h>
//wrong code
//use concept of commbination

int main(void) {
	// your code goes here
	int t;
	long n;
	scanf("%d", &t);
	while(t--){
	    int count=0;
	    scanf("%li", &n);
	    if(n%2 == 0){
	    for(long i=1; i<=(n/2); i++){
	        for(long j=(n/2); j>=1; j--){
	         if((i+j)%2 ==1)
	            count++;
	        }
	    }
	    }
	    else{
	    for(long i=1; i<(n+1)/2; i++){
	        for(long j=(n+1)/2; j>=1; j--){
	         if((i+j)%2 ==1)
	            count++;
	        }
	    }
	    }
	    
	    printf("%d\n", 4*count);
	}
	return 0;
}

