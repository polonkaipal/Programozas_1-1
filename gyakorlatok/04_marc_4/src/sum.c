#include <stdio.h>

int sum(int n, const int tomb[])
{
    int osszeg = 0;

    for (int i = 0; i < n; ++i) {
        osszeg += tomb[i];
    }

    return osszeg;
}

int main()
{
    int szamok[10] = { 56, 46, 53, 34, 64, 37, 3, 75, 4, 3 };
    int meret = 10;

    int osszeg = sum(meret, szamok);
    printf("összeg: %d\n", osszeg);

    return 0;
}
