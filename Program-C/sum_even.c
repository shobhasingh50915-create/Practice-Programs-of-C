#include<stdio.h>

int main(){
int i;
int sum=0;   

for(i=2;i<=100;i+=2){
   sum += i;
 }
printf("The sum of even numbers is %d\n",sum);

    return 0;
}