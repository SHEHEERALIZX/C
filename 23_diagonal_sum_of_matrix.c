#include<stdio.h>
int main(){
    int matrix[20][20],col,row,sum = 0;
    scanf("%d%d",&col,&row);


    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            scanf("%d",&matrix[i][j]);
            if(i==j)
            {
            sum = sum + matrix[i][j];
            }
        }
    }
    printf("%d",sum);


}