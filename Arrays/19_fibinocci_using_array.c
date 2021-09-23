//5 fibinocci series with array 

#include<stdio.h>
int main(){
    int limit,arr[15];
    arr[0]=1,arr[1]=1;
    scanf("%d",&limit);

    printf("%d %d",arr[0],arr[1]);

    for (int i = 2;i<limit;i++)
    {
        arr[i] = arr[i-2] + arr[i-1];
        printf(" %d",arr[i]);
    }
    

    return 0;

}