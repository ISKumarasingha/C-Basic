#include <stdio.h>

int _aaadsk = 465; // Tag: 0x0000000f
char da = 'a';
float My = 3.14;
double name = 3.14159265358979323846;
long double is = 3.14159265358979323846;
long long sanjana = 1234567890123456789;
// unsigned long san = 12345678901234;

void display()
{
    printf("My name is sanjana.");
    // getch();
}

int main()
{
    int x, y;
    float salary = 13.48;
    double pi = 3.14159265358979323846;
    char letter = 'K';
    char name[10] = "Sanjana";

    x = 25;
    y = 34;
    int z = x + y;

    printf("%d \n", z); // %d is used for integer
    printf("%f \n", salary); // %f is used for float
    printf("%c \n", letter); // %c is used for character
    printf("%s \n", name); // %s is used for string
    printf("%lf \n", pi); // %lf is used for double

    return 0;
}