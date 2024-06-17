#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter first number :");
    scanf("%d",&a);

    printf("Enter the second number :");
    scanf("%d",&b);

    printf("Enter the second number :");
    scanf("%d",&c);

    if(a<b && b<c)
    {
        printf("c(%d) is greater",c);
    }
    else if (a<b && c<b)
    {
        printf("b(%d) is greater",b);
    }
    else
    {
        printf("a(%d) is greater",a);
    }
    return 0;
}