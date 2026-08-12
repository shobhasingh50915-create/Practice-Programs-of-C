#include <stdio.h>
#include <math.h> 

int main() {
    double discriminant, root1, root2;
    double a, b, c;
    double realpart, imaginarypart;

   
    printf("Enter coefficient a, b, c: ");
    
    
    scanf("%lf %lf %lf", &a, &b, &c); 

    discriminant = b * b - 4 * a * c;

    
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a); // 4. Fixed root2 typo
        printf("Root1 = %.2lf and Root2 = %.2lf\n", root1, root2); 
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Root1 = Root2 = %.2lf\n", root1);
    }
    else {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(-discriminant) / (2 * a);
        printf("Root1 = %.2lf + %.2lfi and Root2 = %.2lf - %.2lfi\n", 
               realpart, imaginarypart, realpart, imaginarypart);
    }

    return 0;
}
