#include<stdio.h>

int main(){
 int num,reversednum=0,digit;
 printf("Enter an integer:");
 scanf("%d",&num);

 while(num!=0){   //Repeat this step until the original number becomes 0
    digit=num%10;  //digit is the last number entered and any number/10 gives the last digit
    reversednum=reversednum*10+digit; //Add the digit to the new reversed number
    num/=10; //Remove the last digit from the original number
 }
  printf("Reversed Number=%d\n",reversednum);

return 0;
}