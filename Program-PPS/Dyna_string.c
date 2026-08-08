#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char *first_string = "*C Programming";
    const char *second_string = "*C Programming is good";
    
   
    char *dynamic_str = (char *)malloc((strlen(first_string) + 1) * sizeof(char));

    if (dynamic_str == NULL) {
        printf("Memory Allocation failed\n");
        return 1;
    }

    strcpy(dynamic_str, first_string);
    printf("Initial String: %s\n", dynamic_str); 
    printf("Memory Address: %p | Size: %zu\n\n", (void*)dynamic_str, strlen(dynamic_str) + 1);

    char *temp = (char *)realloc(dynamic_str, (strlen(second_string) + 1) * sizeof(char));
    if (temp == NULL) {
        fprintf(stderr, "Memory expansion failed\n");
        free(dynamic_str);
        return 1;
    } 

    dynamic_str = temp;
    strcpy(dynamic_str, second_string);
    
    printf("Modified String: %s\n", dynamic_str);
    printf("Memory Address: %p | Size: %zu\n", (void*)dynamic_str, strlen(dynamic_str) + 1);

    free(dynamic_str);
    dynamic_str = NULL;

    return 0;
}
