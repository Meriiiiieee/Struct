#include <stdio.h>

typedef struct{
    float mathGrade;
    float physicsGrade;
    float chemistryGrade;
} Student;

float average(Student Mery){
    return (Mery.mathGrade + Mery.physicsGrade + Mery.chemistryGrade) / 3;
}

int main() {
    Student Mery;
    
    printf("Enter the grade of math: ");
    scanf("%f", &Mery.mathGrade);
    
    printf("Enter the grade of physics: ");
    scanf("%f", &Mery.physicsGrade);
    
    printf("Enter the grade of chemistry: ");
    scanf("%f", &Mery.chemistryGrade);
    
    printf("The average grade: %f\n", average(Mery));
    return 0;
}
