#include<stdio.h>
int main(){
    char str1[20],str2[20],constr[40];
    int i,j;
    scanf("%s",str1);
    scanf("%s",str2);
    for( i = 0; str1[i]!='\0';i++)
    {
        constr[i] = str1[i];

    }
    for (j = 0; str2[j]!='\0';j++)
    {

        constr[i] = str2[j];


        i++;
    }

    constr[i] = '\0';

    printf("%s",constr);
    return 0;
}