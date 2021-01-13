#include <stdio.h>

int main() {
    float c, f;

    printf("Enter the temperature in Celcius: ");
    scanf("%f", &c);

    f = ( c * 9 / 5 ) + 32;

    printf("\n%f C in Farenheit is: %.2f", c, f);

    return 0;
}