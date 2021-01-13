#include <stdio.h>
#include <conio.h>

int main() {
    int x=2, y=3, z=3, r=1;
    int result;

    //OPERATOR PRECEDENSE ->  
    result = 3 * x / y - z + r;

    printf("%d", result);

    getch();
    return 0;
}