//By using function that returns two value 
#include <stdio.h>
#include<stdlib.h>

float *calc(int n, int *marks,float *returnsize){
   *returnsize=2;
   
   float *result = (float*)malloc((*returnsize) * sizeof(float));
   if (result == NULL) {
       return NULL; // Safety check for memory allocation
   }
   
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    
    float average;
    if(n>0){
     average=sum/n;
    }
    else{
        average=0.0;
    }
    
    result[0] = sum;
    result[1] = average;
    return result;
   }



int main(){
int n;

printf("Enter the no of subjects:");
if (scanf("%d",&n)!= 1 || n <= 0) {
        printf("Invalid number of subjects entered.\n");
        return 1;
}
int marks[n];
printf("enter the marks of subjects(0-100):");
for(int j=0;j<n;j++){
   scanf("%d",&marks[j]); 
}
 
 float returnsize; // Declare returnsize here so the calc function has a local variable to modify
 float *output = calc(n, marks, &returnsize);//We pass '&returnsize' so calc can write the value '2' into it
 
 
 float sum = output[0]; // Extract the answers from the returned array pointer
 float average = output[1];
 
 
 printf("\nthe sum is %0.2f",sum);
  printf("\nthe average is %0.2f",average);
 
  free(output);
    return 0;
}

