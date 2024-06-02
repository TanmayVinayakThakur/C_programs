#include<stdio.h>

float convertTemp(float celsius);

int main() {
    float celsius;
    printf("enter temperature in celsius:");
    scanf("%f", &celsius);
    // convertTemp(celsius);
    float far= convertTemp(celsius);
    printf("temperature in fahreneit is: %f\n", far  );

    return 0;
}

float convertTemp(float celsius){
    float far = celsius *(9.0/5.0) + 32;
    return far;
}