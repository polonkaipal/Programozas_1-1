#include <stdio.h>

int duplaz(int ertek)
{
    return 2 * ertek;
}

int main()
{
    int n = 5;

    int result = duplaz(n);

    printf("%d kétszerese: %d\n", n, result);

    return 0;
}
