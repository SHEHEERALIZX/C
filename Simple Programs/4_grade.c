
#include<stdio.h>
int main(){
  int mark1,mark2,mark3,mark4;
  int avg, new_avg;
  printf("Enter marks in 4 subjects : ");
  scanf("%d%d%d%d",&mark1,&mark2,&mark3,&mark4);
  
  avg = (mark1 + mark2 + mark3 + mark4)/4;
  
  new_avg = avg / 10;
  
  switch(new_avg){
            
                
                case 10 :
                printf("Outstanding ");
                break;
                
                case 9 :
                printf("Outstanding");
                break;
                
                case 8 :
                printf("Very Good");
                break;
                
                
                case 7 :
                printf("Good");
                break;
                
                case 6 :
                printf("average");
                break;
                
                case 5 :
                printf("Satisfactory");
                break;
                
                default :
                // printf("%d",new_avg);
                
                printf("Failed");
  
  }	 	  	 	     	    	  	  	  	 	
  
  return 0 ;
  
  
}