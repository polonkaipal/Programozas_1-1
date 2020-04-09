#include <stdio.h>

/*
    Feladat: adjuk vissza az első két prímszámot.
*/

typedef struct {
    int a;
    int b;
} PairIntInt;

PairIntInt get_first_two_primes()
{
    PairIntInt result = { 2, 3 };
    return result;
}

int main()
{
    int a, b;

    PairIntInt primes = get_first_two_primes();
    a = primes.a;
    b = primes.b;

    printf("%d, %d\n", a, b);    // 2, 3    (ezt szeretném látni)

    return 0;
}
