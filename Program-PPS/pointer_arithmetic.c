#include<stdio.h>

int main(){
 int arr[]={10,20,30,40,50,60,70};
 int *ptr = arr;

 printf("The address of ptr is %p and the value is %d",(void*)ptr,*ptr);

 ptr++;
 printf("\nAfter increment the address is %p",(void*)ptr);
 printf("\nAfter increment the value is %d",*ptr);

ptr--;
 printf("\nAfter decrement the address is %p",(void*)ptr);
 printf("\nAfter decrement the value is %d",*ptr);

 int *ptrnew=ptr+3;
 printf("\nThe new ptr value is %d", *ptrnew);

 long difference=ptrnew-ptr;
  printf("\nElements between ptrnew and ptr is %ld", difference);

    return 0;
}