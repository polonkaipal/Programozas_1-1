#include <stdio.h>

int my_abs(int ertek)
{
    if (ertek < 0) {
        return -1 * ertek;    // return -ertek;
    }
    else {
        return ertek;
    }
}

int main()
{
    int n = -16;

    printf("%d abszolútértéke: %d\n", n, my_abs(n));

    return 0;
}
