#include <stdio.h>


float calq(float dividend, float divisor){
   float quotient=dividend/divisor;
    return quotient;
}

float calr(float dividend, float divisor){
  float remainder=dividend%divisor;
    return remainder;
}


int main(){
float quotient,divisor,dividend;
float  remainder;

printf("Enter the dividend:");
scanf("%f",&dividend);
printf("Enter the divisor:");
scanf("%f",&divisor);

quotient=calq(dividend ,divisor);
remainder=calr(dividend ,divisor);

if (remainder==0){
printf("the remainder is %0.2f",remainder);
}
else{
    printf("the dividend is not divisible by divisor");
}
printf("\nthe quotient is %0.2f\n",quotient);
   return 0;
}
