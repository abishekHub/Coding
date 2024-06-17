#include<stdio.h>
#include<string.h>

int main()
{
    char str[20]="Hello";
    int l=strlen(str);
    strcat(str,"wel come");
    l=l+strlen(str);
    printf("%d\n",l);
    return 0;
}