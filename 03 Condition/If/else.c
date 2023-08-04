#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 2;
    if (num1 < num2) // test-condition
    {
        printf("num1 is smaller than num2");
    }

    int present = 1;
    if (present) // non zero value is true
        printf("There is someone present in the classroom \n");

    int y;
    int x= 2;
    y = (x>=2) ? 5 : 64356;
    printf("y = %d", y);

    const int a = 5; // constant variable, value can't be changed

    return 0;
}

// Nested If-else Statements

/* if (test - expression 1) {
    statement1;
} else if (test - expression 2) {
    Statement2;
} else if (test - expression 3) {
    Statement3;
} else if (test - expression n) {
    Statement n;
} else {
    default;
}
Statement x; */

