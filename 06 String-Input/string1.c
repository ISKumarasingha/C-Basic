#include <stdio.h>

// input using scanf
/* int main()
{
    char name[10];
    int age;
    printf("Enter your first name and age: ");
    scanf("%s", name);
    printf("You entered: %s %d", name, age);
} */

// input using gets
/* int main()
{
    char full_name[25];
    printf("Enter your full name: ");
    gets(full_name);
    printf("My full name is %s ", full_name);
    return 0;
} */

// input using fgets
/* int main()
{
    char name[10];
    printf("Enter your name plz: ");
    fgets(name, 10, stdin);  // find 10, 11, 12 what happend
    printf("My name is %s ", name);
    return 0;
} */

int main()
{
    char name[10];

    printf("Enter your name plz: ");
    scanf("%s", name); 
    gets(name);
    fgets(name, 10, stdin);

    printf("My name is %s ", name);
    return 0;
}


