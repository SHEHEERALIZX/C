#include<stdio.h>
int main()
{
    int inp, flag = 0;
    printf("Enter the number to check whether prime or not : ");
    scanf("%d",&inp);
    for ( int i =2 ; i < inp/2; i++)
    {
        if ( inp%i == 0)
        {
            flag = 1;
        }
    }
    
    if (flag == 1 ){
        printf("not prime");
    }
    else {
        printf("prime");
    }
    return 0;
}