//AREA OF CIRCLE WITH SAME INPUTS VOLUME IN CYLINDER
#include <stdio.h>
#define PI 3.14

int main() {
    int r, h;
    float a, v;

    printf("Enter the Radius: ");
    scanf("%d", &r);

    printf("\nEnter the Height: ");
    scanf("%d", &h);

    a = PI * r * r;
    v = PI * r * r * h;

    printf("\nArea of Circle is: %.2f", a);
    printf("\nVolume of Cylinder is: %.2f", v);

    return 0;
}