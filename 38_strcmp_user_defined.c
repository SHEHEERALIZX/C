#include <stdio.h>
int customlen(char str[]);
int customcmp();
int main()
{
    char str1[20], str2[20];
    int flag = 0;
    scanf("%s", str1);
    scanf("%s", str2);
    flag = customcmp(str1, str2);
    if (flag == 0)
        printf("different");
    else
        printf("same");

    return 0;
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

int customcmp(char *str1, char *str2)
{
    int len1, len2;
    len1 = customlen(str1);
    len2 = customlen(str2);
    if (len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            if (str1[i] != str2[i])
            {

                return 0;
            }
        }

        return 1;
    }
    else
    {

        return 0;
    }
}