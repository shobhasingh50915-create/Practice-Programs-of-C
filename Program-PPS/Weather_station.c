#include <stdio.h>

struct Weatherstation {
    char name[50];
    float temperature[7];
};

int main() {
    struct Weatherstation st;
    float sum = 0;
    float max_temp, min_temp;

    printf("Enter weather station name: ");
    scanf("%49s", st.name);

    for (int i = 0; i < 7; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &st.temperature[i]);

        sum += st.temperature[i];

        // Track max and min temperatures
        if (i == 0) {
            max_temp = st.temperature[i];
            min_temp = st.temperature[i];
        } else {
            if (st.temperature[i] > max_temp) {
                max_temp = st.temperature[i];
            }
            if (st.temperature[i] < min_temp) {
                min_temp = st.temperature[i];
            }
        }
    }

    float average = sum / 7;

    printf("\n--- Weather Report ---\n");
    printf("Station Name: %s\n", st.name);
    printf("Highest Temperature: %.2f\n", max_temp);
    printf("Lowest Temperature: %.2f\n", min_temp);
    printf("Average Temperature: %.2f\n", average);

    return 0;
}
