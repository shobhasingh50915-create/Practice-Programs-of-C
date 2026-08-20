#include<stdio.h>
struct Distance{
    int feet;
    float inch;
};

int main(){
struct Distance d1,d2,sum;

printf("Enter the distance d1:-");
printf("\nFeet:");
scanf("%d",&d1.feet);
printf("\ninch:");
scanf("%f",&d1.inch);

printf("\nEnter the distance d2:-");
printf("\nFeet:");
scanf("%d",&d2.feet);
printf("\ninch:");
scanf("%f",&d2.inch);

sum.feet=d1.feet+d2.feet;
sum.inch=d1.inch+d2.inch;

while(sum.inch>=12.0){
    sum.inch=sum.inch-12.0;
    sum.feet++;
}

printf("Total distance=%d\"%1.f\"\n",sum.feet,sum.inch);

return 0;
}
