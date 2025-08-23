#include <stdio.h>

typedef struct {
    int age;
    float height;
} Person;

int oldest(Person P1, Person P2) {
    if (P1.age > P2.age) {
        return P1.age;
    } else if (P2.age > P1.age) {
        return P2.age;
      }
}

int main() {
    Person P1;
    Person P2;
    
    printf("Enter the age and height of first person: ");
    scanf("%d %f", &P1.age, &P1.height);
    
    printf("Enter the age and height of second person: ");
    scanf("%d %f", &P2.age, &P2.height);
    
    printf("The older is %d", oldest(P1, P2));
    return 0;
}
