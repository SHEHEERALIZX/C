#include<stdio.h>
void fibi();
int main()
{
    fibi();
    return 0 ;
    
}

void fibi(){
    int limit,a =1 ,b = 1,c,i = 2;
    printf("Fibinocci series up to limit : ");
    scanf("%d",&limit);
    printf("%d\n%d\n",a,b);
    
    do {
        c = a + b; 
        printf("%d\n",c);
        c = a + b;
        a = b;
        b = c;
        i++;
        
    }
    while(limit>i);
}