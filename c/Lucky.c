#include <stdio.h>

int main(void) {
    int t;
    long int num;
    scanf("%d", &t);
    while(t--){
        int count=0;
        scanf("%li", &num);
        while(num != 0){
            if((num % 10) == 4){
                count++;
            }
            num = num/10;
        }
        printf("%d\n", count);
    }
	return 0;
}
