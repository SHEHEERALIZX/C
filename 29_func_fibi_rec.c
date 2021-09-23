#include<stdio.h>
int fib(int);
int main()
{
    int i,n,j=0;
    printf("input = ");
    scanf("%d",&n);
    printf("output = ");
    for(i=0;i<n;i++)
    {
        printf(" %d",fib(j));
        j++;
    }
    return 0;
}
int fib(int n)
{
    if(n==0)
      return 1;
    if(n==1)
      return 1;
    else
      return fib(n-1)+fib(n-2);
}
