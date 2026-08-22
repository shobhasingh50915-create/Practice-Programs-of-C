#include <stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};

int main(){
    struct Employee emp[3];
    int i;
    for(i=0;i<3;i++){
       printf("Enter the details of Employee[%d]:-",i);
       printf("\nEnter id:");
       scanf("%d",&emp[i].id);
       printf("Enter name:");
       scanf("%s",&emp[i].name);
       printf("Enter salary:");
       scanf("%f",&emp[i].salary);
    }
      
      for(i=0;i<3;i++){
       printf("\n\n------The records of Employee [%d]------",i);
       printf("\nId is %d",emp[i].id);
       printf("\nName is %s",emp[i].name);
       printf("\nSalary is %f",emp[i].salary);
       
    }
      return 0;
    }
