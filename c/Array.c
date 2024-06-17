#include<stdio.h>

int main()
{
    int myNumbers[]={10,20,30,40,50};
    myNumbers[0]=100;

    int i;
    int sum =0;

    for (i=0;i<6;i++);
    {
        sum = sum + myNumbers[i];
    }
    printf("%d\n",sum);
    return 0;    
    

}