//Task: Ask the user to enter their birth year and their favorite single character, read both inputs using scanf(), and print them back to the screen.
#include <stdio.h>

int main() {
    char birth_date[50];
    char pagol[50];
    printf("Enter that persons birth date:");
    scanf("%[^\n]", birth_date);
    printf("Enter that persons name:");
    scanf(" %[^\n]", pagol);
    printf("The name of that person is %s and the birth date is %s\n", pagol, birth_date);
    return 0;
}