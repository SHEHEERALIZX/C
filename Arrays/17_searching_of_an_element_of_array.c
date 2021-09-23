//3 search of array

#include<stdio.h>
int main(){
    int limit,arr[10],searchkey,pos,flag=0;
    scanf("%d",&limit);

    for (int i = 0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&searchkey);
    for (int i = 0;i<limit;i++)
    {
        if(arr[i]==searchkey)
        {
            pos = i+1;
            flag=1;
            break;
        }
   
    }
    if(flag==1){
        printf("The element is present in the array and its position is %d",pos);
    }  else{
        printf("The element is not present in the array");

    }
     return 0;

}