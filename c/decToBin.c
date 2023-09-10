#include<stdio.h>
// #include<stdlib.h>

int main()
{
    int dec;
    // =atoi(argv[1]);
    int bin[15];
    int i=0;
    scanf("%d", &dec);
    while(dec)
    {
        bin[i] = dec%2;
        dec = dec/2;
        i++;
    }
    for(int j = i-1; j>=0; j--){
        printf("%d ", bin[j]);
    }
    return 0;
}