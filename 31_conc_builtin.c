// Concatenate string using built in Function

#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    strcat(str1,str2);
    printf("%s\n",str1);
    return 0;
    
}