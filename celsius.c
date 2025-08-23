#include <stdio.h>

typedef struct {
    float celsius;
    float fahrenheit;
} Temperature;

float fahrenheit(Temperature t) {
    return (t.celsius * 9/5) + 32;
}

int main() {
    Temperature t;
    
    printf("Enter the celsius: ");
    scanf("%f", &t.celsius);
    
    printf("Celsius in fahrenheit: %f\n", fahrenheit(t));
    return 0;
}
