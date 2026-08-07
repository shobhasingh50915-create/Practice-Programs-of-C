#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int* table;

    printf("Enter the number of integers you want in the table: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size entered.\n");
        return 1;
    }

    table = (int*)malloc(n * sizeof(int));

    if (table == NULL) {
        printf("Memory allocation failed! Exiting...\n");
        return 1; 
    }

    printf("Enter %d integers:\n", n);

    for(i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &table[i]); 
    }

    printf("\n---Your table --- \n");
    for(i = 0; i < n; i++) {
        printf("%d ", table[i]); 
    }
    
    printf("\n");

    free(table);

    return 0; 
}
