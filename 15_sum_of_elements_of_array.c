//1 sum of elements of array

#include<stdio.h>
int main(){
    int limit,arr[10],sum = 0;
    scanf("%d",&limit);

    for (int i = 0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];

    }
    printf("%d",sum);
    return 0;

}