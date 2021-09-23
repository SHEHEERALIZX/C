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
            if(matrix[i][j] != matrix[j][i]){
                flag = 1;
                break;
            }
     
        }
    }


    if(flag==1){
        printf(" Not symmetric");

    } else {
        printf("symmetric");
    }
    return 0;

}