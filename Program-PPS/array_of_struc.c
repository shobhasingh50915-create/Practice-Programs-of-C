#include <stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};

int main(){
    struct Employee emp[3];
    int i;
    for(i=0;i<n;i++){
       printf("Enter the details of Employee:");
       printf("Enter id:");
       scanf("%d\n",&emp[i].id);
       printf("Enter name:");
       scanf("%s\n",&emp[i].name);
       printf("Enter salary:");
       scanf("%f\n",&emp[i].salary);

    }
}