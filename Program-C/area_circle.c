#include <stdio.h>
#include <math.h> 

float calarea(int r) { 
    return M_PI * pow(r, 2); 
} 

float calcir(int r) { 
    return 2 * M_PI * r; 
} 

int main() { 
    int r; 
    
    printf("Enter the radius of the circle: "); 
    scanf("%d", &r); 
    
    float area = calarea(r); 
    float circ = calcir(r); 
    
    printf("The area is: %.2f\n", area); 
    printf("The circumference is: %.2f\n", circ); 
    
    return 0; 
}
