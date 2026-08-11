#include <stdio.h>
 
int main(){
    int arr[50];
    int i,n;
    int sum=0;
    int *ptr;

printf("Enter the no of element: ");
scanf("%d",&n);

printf("Enter the %d element\n",n);
for(i=0;i<n;i++){
  scanf("%d",&arr[i]);  
}

ptr=arr;

for(i=0;i<n;i++){
    sum += *ptr;
    ptr++;
}

printf("The sum of array element is %d",sum);

    return 0;
}