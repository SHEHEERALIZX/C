// using built in function

#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int len;
    gets(str);
    len = strlen(str);
    printf("%d",len);
    return 0;
}

