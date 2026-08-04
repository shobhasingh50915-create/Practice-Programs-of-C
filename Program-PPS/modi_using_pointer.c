#include <stdio.h>

int main(){
  int n=20;
  int *ptr;
  ptr=&n;

  printf("The value of n is %d",n);
  printf("The value of ptr is %d",*ptr);

  *ptr=25;
  printf("The value of n is %d",n);
  printf("The value of ptr is %d",*ptr);

    return 0;
}