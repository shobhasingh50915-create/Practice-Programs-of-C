#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3, i;
    int* ptr; 

    // 1. MALLOC SECTION
    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Malloc failed\n");  // check memory to prevent crash of program
        return 1;
    }

    printf("Memory allocated with malloc (garbage values):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
        ptr[i] = i + 1; // show garbage  memory & loop allocate the memory as ptr[0],ptr[1],ptr[2]
    }

    free(ptr);
    printf("\n\nMemory freed.\n");

    // 2. CALLOC SECTION
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Calloc failed\n"); // check memory to prevent crash of program
        return 1;
    }

    printf("Memory allocated with calloc (initialized to 0):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
        ptr[i] = (i + 1) * 10; // Assign value 10,20,30
    }

    // 3. REALLOC SECTION
    int new_n = 5;  // reallocate memory from 3 to 5
    int* temp = (int*)realloc(ptr, new_n * sizeof(int));
    if (temp == NULL) {
        printf("\nRealloc failed\n");  // check memory to prevent crash of program
        free(ptr);
        return 1;
    }
    ptr = temp; 

    printf("\n\nMemory resized with realloc to %d elements:\n", new_n);
    ptr[3] = 40;
    ptr[4] = 50;

    for (i = 0; i < new_n; i++) {
        printf("%d ", ptr[i]); //To show old & newly added value together
    }

    free(ptr);
    ptr = NULL;
    return 0;
}
