#include <stdio.h>

struct Weatherstation {
    char name[50];
    float temperature[7];
};

int main() {
    struct Weatherstation st;
    float sum = 0;
    
    printf("Enter weather station name: ");
    scanf("%49s", st.name);
    
    for (int i = 0; i < 7; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &st.temperature[i]);
        sum += st.temperature[i];
    }
    
    float average = sum / 7;
    
    printf("\n--- Weather Report ---\n");
    printf("Station Name: %s\n", st.name);
    printf("Average Temperature: %.2f\n", average);
    
    return 0;
}
