#include<stdio.h>
int main(){
    int matrix[20][20],col,row,colsum = 0,rowsum=0;
    scanf("%d%d",&col,&row);


    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            colsum = colsum + matrix[i][j];
        }
        printf(" %d",colsum);
        colsum = 0;
    }

    for(int j=0;j<col;j++){
        for(int i=0;i<row;i++){
            rowsum = rowsum + matrix[i][j];
        }
        printf(" %d",rowsum);
        rowsum = 0;
    }

}