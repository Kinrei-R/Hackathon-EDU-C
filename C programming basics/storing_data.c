#include <stdio.h>
// The question is Declare three variables: your age (20), your height in meters (6.2), and your blood group letter ('O'). Print all three in one sentence using printf().
int main () {
    int age=20;
    float height=6.2;
    char blood_group='O';
    printf("My age is %d\n", age);
    printf("My height is %.2f\n", height);
    printf("My blood group is %c\n", blood_group);
    printf("My age is %d, height is %.2f and blood group is %c\n", age, height, blood_group);

    return 0;
}