 //program to find sum of natural numbers upto limit without loop
#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("Enter the value of n :  ");
    scanf("%d",&n);
    sum = (n*(n+1)/2);
    //program to find sum of natural numbers upto limit without loop
    printf("Sum of n terms : %d",sum);
    return 0;
    
}