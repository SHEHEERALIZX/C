//2 largest element of array 

#include<stdio.h>
int main(){
    int limit,arr[10];
    printf("Enter the limit : ");

    scanf("%d",&limit);

    for (int i = 0;i<limit;i++)

    {
        printf("Enter the %d number : ",i+1);
        scanf("%d",&arr[i]);
    }


    for (int i = 1;i<limit;i++)
    {
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("Largest number is : %d\n",arr[0]);

    return 0;

}