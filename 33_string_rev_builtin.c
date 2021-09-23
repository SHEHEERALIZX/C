//  Currently this library not Working in GCC try with Turbo C

#include<stdio.h>
#include<string.h>
int main(){
    
    char strarr[100];
    gets(strarr);
    strrev(strarr);
    printf("%s",strarr);
    return 0;
}