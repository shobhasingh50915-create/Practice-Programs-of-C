#include <stdio.h>

int main(){
int arr[50];
int n,i;
int sum=0;

printf("Enter the number of element:");
scanf("%d",&n);

printf("Enter the %d elements:",n);
for(i=0;i<n;i++){
    scanf("%d", &arr[i]);
}

for(i=0;i<n;i++){
sum = sum+arr[i];
}

printf("The sum is %d",sum);
    return 0;
}