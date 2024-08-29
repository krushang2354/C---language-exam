#include <stdio.h>



void main(){
               //0    1   2   3   4
    char a[5] = {'A','B','C','D','E'};

    printf("Array 1 value : %c\n",a[5]);


               //0    1   2   3   4
    int b[5] = {100,200,300,400,500};

    printf("Array 2 value : %d\n",b[3]);

    int c[10];

    printf("Enter a number\n"); // output

    scanf("%d",&c[0]); // input

    printf("Array 3 value : %d",c[0]);



}
