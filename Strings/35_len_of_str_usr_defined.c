

#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int count = 0;
    scanf("%s",str);
    for (int i = 0; str[i] != '\0'; i++)
    count++;

    printf("%d",count);
    return 0;
    
}