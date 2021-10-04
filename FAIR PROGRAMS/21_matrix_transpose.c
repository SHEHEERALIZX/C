#include<stdio.h>
int main(){
    int matrix[20][20],col,row,flag=0;
    scanf("%d%d",&col,&row);


    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            scanf("%d",&matrix[i][j]);
     
        }
    }



    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf(" %d",matrix[j][i]);
        }
        printf("\n");
        
    }

    return 0;

}