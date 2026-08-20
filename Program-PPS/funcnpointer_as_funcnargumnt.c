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

int compareDesc(int a, int b) { 
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
        if (best_ptr != (arr + i)) { 
            swap(best_ptr, (arr + i));
        }
    }
}

void printArray(int *arr, int n) { 
    for (int *p = arr; p < (arr + n); p++) { 
        printf("%d ", *p);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 113}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    printf("Original: ");
    printArray(arr, n);
    
    selectionsort(arr, n, compareAsc); 
    printf("Ascending: ");
    printArray(arr, n);
    
    selectionsort(arr, n, compareDesc); 
    printf("Descending: ");
    printArray(arr, n);
    
    return 0;
}
