#include<stdio.h>
int main(){
double base;
int exp;
double result=1.0;

printf("Enter a base no:-");
scanf("%lf",&base);

printf("Enter an exponential:-");
scanf("%d", &exp);

int tempExp=exp;
if(exp<0){
    base=1.0/base;
    exp= -exp;
}
while(exp>0){
    result *= base;
    --exp;
}

printf("Answer= %lf\n",result);


    return 0;
}