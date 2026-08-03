#include<stdio.h>

int main(){
int age=25;
int *ptr;
ptr= &age;

printf("The age is %d",age);
printf("\nThe address of age is %p",&age);

printf("\n\n-------In Ptr-------");
printf("\n\nThe age is %d",*ptr);
printf("\nThe address of age is %p",ptr);

printf("\n\n-------New value in Ptr-------");
*ptr=30;
printf("\nThe age is %d",*ptr);

return 0;
}
