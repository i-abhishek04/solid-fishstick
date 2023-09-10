#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int t, x, y, z;
	int* total;
	scanf("%d", &t);
	total=(int *)malloc(t*sizeof(int));
	for(int i=0; i<t; i++){
	    scanf("%d %d %d", &z, &y, &x);
	    total[i]=x-y+z;
	}
	for(int j=0; j<t; j++){
	    printf("%d\n", total[j]);
	}
	return 0;
}
