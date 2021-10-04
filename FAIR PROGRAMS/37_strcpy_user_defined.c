#include<stdio.h>
int main(){
    char src[20],dest[20];
    int i,j;
    scanf("%s",src);
    for( i = 0; src[i]!='\0';i++)
    {
        dest[i] = src[i];
   
    }
    dest[i] = '\0';

    printf("%s",dest);
    
    
    

}