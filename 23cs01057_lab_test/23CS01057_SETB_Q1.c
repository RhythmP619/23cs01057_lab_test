#include <stdio.h>

int main(){
    float radius, height;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("Enter the height: ");
    scanf("%f", &height);

    float pi = 3.14;

    float volume = pi * radius * radius * height;
    float area = 2 * pi * radius * height + 2 * pi * radius * radius;

    printf("Volume: %.2f\n", volume);
    printf("Area: %.2f\n", area);
}   