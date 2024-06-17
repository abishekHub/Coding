#include<stdio.h>

int main()
{
    int n1=5, n2=3, temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("%d %d\n",n1,n2);
    return 0;
}