//SIMPLE INTRESET
#include <stdio.h>

int main() {
    int p, r, t, si;

    printf("\nEnter the Principle Amount: ");
    scanf("%d", &p);

    printf("\nEnter the Rate of Intreset: ");
    scanf("%d", &r);

    printf("\nEnter the Time Period: ");
    scanf("%d", &t);

    si = p * r * t / 100;

    printf("\nSimple Intreset is %d", si);

    return 0;
}