#include<stdio.h>

struct parent {
    char name[20];
    char place[20];
    int  age;

};

int main()
{ 
    struct parent child;
    int limit;
    printf("Enter the limit :");

    scanf("%d",&limit); 

    for(int i = 0; i < limit; i++){
        printf("Enter the Name : ");
        scanf("%s",child.name); 

        printf("Enter the place : ");
        scanf("%s",child.place);

        printf("Enter the age : ");
        scanf("%d",&child.age);

    }



    printf("\nStudents List : \n");




    for(int i = 0; i < limit; i++){


        printf("\n Student Name : %s\n Student Age : %d\n Student Place : %s\n",child.name,child.age,child.place);
        printf("--------------\n");


    }




 return 0;
}