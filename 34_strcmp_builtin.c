// String Comparrison using built in Function

#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    int flag = strcmp(str1,str2);
    if (flag==0)
    printf("same");
    else 
    printf("different");
    return 0;
    
}