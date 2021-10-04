#include<stdio.h>
#define PI 3.14  
int main(){
    float  rad,area;
    printf("Enter the Circle radious : " );
    scanf("%f", &rad);
    area = PI * rad * rad;
    printf("Area of circle of radious %.2f is :  %.2f",rad,area);
    return 0;
    
}