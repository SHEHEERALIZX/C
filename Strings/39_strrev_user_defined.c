#include <stdio.h>
int customlen(char *str);
char revstr(char *str);
int main()
{
   char str[20];
   scanf("%s",str);
   revstr(str);

}

char revstr(char *str){
    char rev[20];
    int k = customlen(str);
    int j = k-1;
    for (int i = 0; i < k; i++)
    {
        rev[i] = str[j];
        j--;

    } 
    printf("%s",rev);
}
 

int customlen(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}