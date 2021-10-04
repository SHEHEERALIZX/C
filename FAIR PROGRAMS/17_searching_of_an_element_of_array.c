//3 search of array

#include<stdio.h>
int main(){
    int limit,arr[10],searchkey,pos;
    printf("Enter the limit : ");

    scanf("%d",&limit);

    for (int i = 0;i<limit;i++)
    {
        printf("Enter the %d number : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the Search Value :");

    scanf("%d",&searchkey);
    for (int i = 0;i<limit;i++)
    {
        if(arr[i]==searchkey)
        {
            pos = i+1;
            printf("The element is present in the array and its position is %d",pos);
            return 0;
        }
   
    }

    printf("The element is not present in the array");

    return 0;

}