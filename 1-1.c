//AREA OF RECTANGLE
#include <stdio.h>

int main() {
    int l, b, a; //FOR HARD CODE CHANGE THE VALUE OF L AND B
    //USER INPUTS
    printf("\nEnter the Length of Rectangle: ");
    scanf("%d", &l);

    printf("\nEnter the Breadth of Rectangle: ");
    scanf("%d", &b);
    //AREA OF RECT FORMULAE
    a = l * b;
    //RESULT
    printf("\nArea of Rectangle having length %d and breadth %d is: %d", l, b, a);

    return 0;
}