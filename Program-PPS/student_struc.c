#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
};

int main(){
struct student s;
printf("Enter Name:");
fgets(s.name,sizeof(s.name),stdin);
printf("Enter roll:");
scanf("%d",&s.roll);
printf("Enter cgpa:");
scanf("%f",&s.cgpa);

printf("Name:%s,s.name");
printf("Roll:%d,s.roll");
printf("Cgpa:%f,s.cgpa");

return 0;
}
