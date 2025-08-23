#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;

float distance(Point one , Point two){
    return sqrt((two.x - one.y) * (two.x - one.x) + (two.y - one.y) * (two.y - one.y));
}

int main() {
    Point one;
    Point two;
    
    printf("Enter the cordinates of point one: ");
    scanf("%f %f", &one.x, &one.y);
    
    printf("Enter the cordinates of point two: ");
    scanf("%f %f", &two.x, &two.y);
    
    printf("Distance of points: %f\n", distance(one, two));
    return 0;
}
