#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int compareAsc(int a, int b) {
    return a < b;
}

int compareDesc(int a, int b) { // Fixed spelling from comparedes
    return a > b;
}

void selectionsort(int *arr, int n, int (*compare)(int, int)) {
    int *best_ptr;
    for (int i = 0; i < n - 1; i++) {
        best_ptr = (arr + i);
        for (int j = i + 1; j < n; j++) {
            if (compare(*(arr + j), *best_ptr)) {
                best_ptr = (arr + j);
            }
        }
        if (best_ptr != (arr + i)) { // Fixed arr+1 to arr+i
            swap(best_ptr, (arr + i));
        }
    }
}

void printArray(int *arr, int n) { // Fixed type 'inth' to 'int n'
    for (int *p = arr; p < (arr + n); p++) { // Fixed 'inth', 'P', and '< (arr +1)'
        printf("%d ", *p);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 113}; // Fixed missing closing brace
    int n = sizeof(arr) / sizeof(arr[0]); // Fixed 'size of' and 'Size of'
    
    printf("Original: ");
    printArray(arr, n); // Fixed function name and spacing
    
    selectionsort(arr, n, compareAsc); // Fixed capitalization and spacing
    printf("Ascending: ");
    printArray(arr, n);
    
    selectionsort(arr, n, compareDesc); // Fixed capitalization, spelling, and spacing
    printf("Descending: ");
    printArray(arr, n);
    
    return 0;
}
