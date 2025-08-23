#include <stdio.h>
#include <math.h>
#define PI 3.14

typedef struct {
    float radius;
} Circle;

float circumference(Circle c) {
    return 2 * PI * c.radius;
}

float area(Circle c) {
    return PI * (c.radius * c.radius);
}

int main() {
    Circle c;
    
    printf("Enter the radius: ");
    scanf("%f", &c.radius);
    
    printf("The circumference: %f\n", circumference(c));
    printf("The area: %f\n ", area(c));
    return 0;
}
