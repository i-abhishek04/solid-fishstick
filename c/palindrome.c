#include<stdio.h>

int isPalindrome(int num){
    int newnum=0;
    int temp;
    while(num!=0){
        temp=num%10;
        newnum = newnum*10 + temp;
        num /=10;
    }
    return newnum;
}
int main(){
    int num;
    printf("Enter a number to check palindrome ");
    scanf("%d", &num);
    int newnum = isPalindrome(num);
 
    if(newnum==num){
        printf("The number is palindrome");
    }
    else
        printf("The number is not a palindrome");
    return 0;
}