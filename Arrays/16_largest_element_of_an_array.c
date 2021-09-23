//2 largest element of array 

#include<stdio.h>
int main(){
    int limit,arr[10];
    scanf("%d",&limit);

    for (int i = 0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }


    for (int i = 1;i<limit;i++)
    {
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("%d",arr[0]);

    return 0;

}