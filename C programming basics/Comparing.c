//Task: Ask the user for two numbers and print 1 (True) or 0 (False) for each of these checks: whether they are equal, whether they are not equal, and whether the first number is greater than or equal to the second.
#include <stdio.h>
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Are the numbers equal? %d\n", x == y);
    printf("Are the numbers not equal? %d\n", x != y);
    printf("Is the first number greater than or equal to the second? %d\n", x >= y);
    return 0;}