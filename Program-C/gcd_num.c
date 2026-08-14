#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid number of elements\n");
        return 0;
    }
    
    int arr[n];
    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    int result = arr[0];
    
    
    for (i = 1; i < n; i++) {
        result = gcd(result, arr[i]);
        if (result == 1) {
            break; 
        }
    }
    
    printf("The GCD of the array elements is: %d\n", result);
    
    return 0;
}
