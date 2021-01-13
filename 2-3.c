#include <stdio.h>
#include <conio.h>

int main() {
    int d, r;

    printf("Enter the number to check the Divisiblity by 97: ");
    scanf("%d", &d);

    r = d % 97;

    //IF IT GIVES 0 IT IS DIVISIBLE OTHERWISE WE GET REMAINDER
    printf("\nDivisiblity Test Returns: %d", r);

    getch();
    return 0;
}