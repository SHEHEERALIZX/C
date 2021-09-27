#include<stdio.h>
int main()
{
    int inp,rem=0,output=0;
    printf("Enter a 5  digit number :");
    scanf("%d",&inp);
    while(inp > 0)
    {
        rem = inp%10;
        // printf("%d",rem);
        output = output*10 + rem;
        inp = inp/10;
    }   
    
    printf("%d",output);
    return 0 ;
    
}