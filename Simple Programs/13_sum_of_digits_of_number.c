#include<stdio.h>
int main()
{
    int inp, sum = 0,rem ;
    printf("Input a number : ");
    scanf("%d",&inp);
    while(inp>0)
    {
        rem = inp % 10;
        sum = sum  + rem;
        inp = inp / 10;
        
    }
    printf("%d",sum);
    return 0 ;
    
    
}