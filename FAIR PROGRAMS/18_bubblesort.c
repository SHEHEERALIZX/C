//4 sorting array with bubble sort

#include<stdio.h>
int main(){
    int limit,arr[10],temp;
    scanf("%d",&limit);

    for (int i = 0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }


    for (int i = 0;i<limit-1;i++)
    {
        for (int j = 0; j < limit -1 ; j++){
            if(arr[j]>arr[j+1]){
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        
        }

        }
  
    }

    for (int j = 0;j<limit;j++)
    {
        printf("Outputs are : ");

        printf("%d\n",arr[j]);
    }
    return 0;

}