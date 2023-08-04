#include<stdio.h>

int main()
{
    int A = 5;
    int B = 6;

// Arithmetic Operators
    printf("%d \n", A+B);  // 11
    printf("%d \n", A-B);  // -1
    printf("%d \n", A*B);  // 30
    printf("%f \n", (float)A/B); // 0.833333
    printf("%d \n", A%B); // 5

// Rational and Logical Operators
    printf("%d \n", A&&B); // 1 , and
    printf("%d \n", A||B); // 1 , or
    printf("%d \n", !A); // 0
    printf("%d \n", A==B); // 0
    printf("%d \n", A!=B); // 1
    printf("%d \n", A>B); // 0
    printf("%d \n", A<B); // 1

// Bitwise Operators
    printf("%d \n", A&B); // 4
    printf("%d \n", A|B); // 7
    printf("%d \n", A^B); // 3

    return 0;
}
