#include <stdio.h>
#include <conio.h>

int main() {
    int num;

    printf("Enter the Marks of the subject: ");
    scanf("%d", &num);

    if (num * 33 / 100) {
        printf("\nYou Passed this Subject!");
    }
    else {
        printf("\nYou failed this Subject!");
    }

    getch();
    return 0;
}