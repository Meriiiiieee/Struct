#include <stdio.h>

typedef struct {
    float weight;
    float height;
} Person;

float BMI(Person p) {
    return (p.weight / (p.height * p.height)) ;
}

int main () {
    Person p;
    
    printf("Enter the weight: ");
    scanf("%f", &p.weight);
    
    printf("Enter the height: ");
    scanf("%f", &p.height);
    
    printf("The BMI is: %f\n", BMI(p));
    
    if (BMI(p) < 18.5) {
        printf("The category is underweight ");
    } else if (BMI(p) >= 18.5 && BMI(p) <= 24.9) {
        printf("The category is normal ");
    } else {
        printf("The category is overweight ");
    }
    
    return 0;
}
