#include <stdio.h>

int main(){
    float x, y, r, x1, y1;
    printf("Enter the x coordinate of the center of the circle: ");
    scanf("%f", &x);
    printf("Enter the y coordinate of the center of the circle: ");
    scanf("%f", &y);
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("Enter the x coordinate of the point: ");
    scanf("%f", &x1);
    printf("Enter the y coordinate of the point: ");
    scanf("%f", &y1);

    float result = (x - x1)*(x - x1) + (y - y1) * (y - y1) - r * r;

    if (result > 0){
        printf("Outside the circle.\n");
    } else if (result < 0){
        printf("Inside the circle.\n");
    } else {
        printf("On the circle.\n");
    }

    
}   