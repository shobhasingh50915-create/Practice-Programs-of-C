#include <stdio.h>

void swap(int *a, int *b);

int main(){
    int a;
    int b;

    printf("Enter the num a:");
    scanf("%d",&a);
    printf("Enter the num b:");
    scanf("%d",&b);

    printf("Before Swapping:");
    printf("a=%d , b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter Swapping:");
    printf("a=%d , b=%d",a,b);


    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
