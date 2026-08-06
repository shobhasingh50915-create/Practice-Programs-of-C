#include <stdio.h>

int main(){
int num;

printf("Enter the num:");
scanf("%d",&num);

if(num%2==0){
    printf("The num %d is even",num);
}else{
    printf("the num %d is odd",num);
}
    return 0;
}
