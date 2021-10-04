#include<stdio.h>

int main(){
    int  a,b,*x,*y,temp;
    printf("Enter 2 numbers : " );
    scanf("%d%d", &a,&b);

    x = &a;
    y = &b;


    temp = *x;
    *x = *y;
    *y = temp;


    printf("After Swapping \n Value of a :%d\n Value of b : %d\n ",a,b);
    return 0;
    
}