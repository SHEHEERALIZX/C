//6 matrix addition 


#include<stdio.h>
int main(){
    int matrix1[20][20],matrix2[20][20],addarr[20][20],col,row;
    scanf("%d%d",&col,&row);


    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }


    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }



    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            addarr[i][j] = matrix1[i][j]+ matrix2[i][j];
            printf("%d\t",addarr[i][j]);
        }
            printf("\n");

    }

    return 0 ;


}