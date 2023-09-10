#include <stdio.h>
#include<string.h>

int main(){
	int N = 0;
	char ans[4];
	scanf("%d", &N);
	
	long data[N];
	for(int i=0; i<N; i++)
	    scanf("%ld", &data[i]);
	
    // write your code here
	if(data[N-1]%10 ==0)
		strcpy(ans, "Yes");
	else
		strcpy(ans, "No");
    // ans = 
    printf("%s", ans);
    
    return 0;
	}