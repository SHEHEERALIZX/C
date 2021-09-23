#include<stdio.h>
int main()
{
    int inp;
    printf("Choose the multiplication table : ");
    scanf("%d",&inp);
    for (int i = 1; i < 11 ; i++)
    {
        printf("%d * %d = %d\n" ,i , inp, i*inp);
    }
    return 0 ;
}