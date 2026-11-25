//Task: Ask the user for a number. Without using if-else, print 1 if the number is between 10 and 50 (inclusive), and print 0 otherwise.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d", (num >=10 && num <=50));
    return 0;
}