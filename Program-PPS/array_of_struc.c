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
       printf("Enter the details of Employee:");
       printf("Enter id:");
       scanf("%d\n",&emp[i].id);
       printf("Enter name:");
       scanf("%s\n",&emp[i].name);
       printf("Enter salary:");
       scanf("%f\n",&emp[i].salary);
    }
      while(i<3) {
       printf("The details of Employee:");
       printf("Id is %d",&emp[i].id);
       printf("Name is %s",&emp[i].name);
       printf("Salary is %f",&emp[i].salary);
       i++;
    }
      return 0;
    }
