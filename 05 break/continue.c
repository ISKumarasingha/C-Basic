#include <stdio.h>
int main()
{
    int nb = 7;
    while (nb > 0)
    {
        nb--;
        if (nb == 5)
            continue;
        printf("%d\n", nb);
    }
}