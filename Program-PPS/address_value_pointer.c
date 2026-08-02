# include <stdio.h>

int main(){
    int num;
    int *ptr;
    ptr=&num;

   printf("Enter the no:");
   scanf("%d",&num);
 
   printf("\nthe num is %d",num);
   printf("\nthe address of num is %p", &num);
   printf("\nthe address of num in ptr is %p", ptr);
   printf("\nthe value accesed by ptr is %d",*ptr);


    return 0;
}