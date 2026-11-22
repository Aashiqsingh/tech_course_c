#include<stdio.h>

void add(int a,int b)
{
    int c = a + b;
    printf("Addition = %d",c);
}

void sub(int a,int b)
{
    int c = a - b;
    printf("Subtract = %d",c);
}

void areaOfrect(int l,int b)
{

}

void main()
{
    int choice,a,b;
    printf("\n1 - Add\n2 - Sub\n3 - Mul\n4 - Div\nEnter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("Enter two number :");
                scanf("%d%d",&a,&b);
                add(a,b);
                break;
        case 2: printf("Enter two number :");
                scanf("%d%d",&a,&b);
                sub(a,b);
                break;
        case 3: 
    }
}