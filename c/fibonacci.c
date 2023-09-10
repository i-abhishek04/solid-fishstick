#include<stdio.h>
void Fibonacci(int num);
int main(){
    int num;
    printf("Enter number of terms you want in the Fibonacci series\n");
    scanf("%d",&num);
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    Fibonacci(num-2);
    return 0;
}
void Fibonacci(int n){    
    static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         Fibonacci(n-1);    
    }    
} 