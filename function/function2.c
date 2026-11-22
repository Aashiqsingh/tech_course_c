#include<stdio.h>

// without return with argument


void add(int a,int b)
{
    int c = a+b;

    printf("Addition = %d\n",c);
}

void main()
{
    add(12,13);
    add(80,90);


    add(1,1);
}