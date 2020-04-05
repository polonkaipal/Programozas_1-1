#include <stdio.h>

/*
    Az előadáson szó volt a mutatókról.

    Feladat: adjuk vissza az első két prímszámot.
*/

void get_first_two_primes(int *p1, int *p2)
{
    *p1 = 2;
    *p2 = 3;
}

int main()
{
    int a, b;

    get_first_two_primes(&a, &b);

    printf("%d, %d\n", a, b);    // 2, 3    (ezt szeretném látni)

    return 0;
}
