#include <stdio.h>
#include <math.h>

typedef struct {
    int numerator;
    int denominator;
} Rational;

float product(Rational a, Rational b) {
    if (a.denominator != 0 && b.denominator != 0) {
        float numerator = a.numerator * b.numerator; 
        float denominator = a.denominator * b.denominator;
        return numerator / denominator;
    } else {
        printf("denominator cannot be zero: ");
        return 0;
    }
}    

float sum(Rational a, Rational b) {
    if (a.denominator != 0 && b.denominator != 0) {
    float denominator = a.denominator * b.denominator;
    float numerator = ((denominator/a.denominator) * a.numerator) + ((denominator/b.denominator) * b.numerator);
    return numerator/ denominator;
    } else {
        printf("denominator cannot be zero: ");
        return 0;
    }
}

int main() {
    Rational a;
    Rational b;
    
    printf("Enter the numerator and denominator of a: ");
    scanf("%d %d", &a.numerator, &a.denominator);
    
    printf("Enter the numerator and denominator of b: ");
    scanf("%d %d", &b.numerator, &b.denominator);
    
    printf("The product of numbers: %f\n", product(a, b));
    printf("The sum of numbers: %f\n", sum(a, b));
    return 0;
}
