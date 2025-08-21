#include <stdio.h>

typedef struct{
    int length;
    int width;
} Rectangle;

int area(Rectangle r){
    return r.length * r.width;
}

int perimetr(Rectangle r){
    return 2 * (r.length + r.width);
}

int main() {
    Rectangle r;
    
    printf("Enter the length of rectangle: ");
    scanf("%d", &r.length); 
    
    printf("Enter the width of rectangle: ");
    scanf("%d", &r.width);
    
    printf("The area: %d\n", area(r));
    printf("The perimetr: %d\n", perimetr(r));
    return 0;
    
}
