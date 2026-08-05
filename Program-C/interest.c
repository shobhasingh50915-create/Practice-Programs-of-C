# include <stdio.h>
#include <math.h>
float simpint(float p,float r,float time){
  float simple_interest=(p*r*time)/100;
    return simple_interest;
}
float compint(int p,int r,int time){
   float total_interest= p * pow((1 + r / 100.0), time);
   float compound_interest=total_interest-p;
    return compound_interest;
}

int main(){  
  float p,r,time;
  
  
  printf("Enter the principal:");
  scanf("%f",&p);
  printf("Enter the rate of interest:");
  scanf("%f",&r);
  printf("Enter the time period:");
  scanf("%f",&time);
  
  float simple_interest= simpint(p,r,time);
  float compound_interest= compint(p,r,time);
  
  printf("The simple interest is %0.2f",simple_interest);
  printf("\nThe compound interest is %0.2f",compound_interest);
  return 0;
}