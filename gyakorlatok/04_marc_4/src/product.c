#include <stdio.h>

void tomb_kiiratasa(int n, const int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

int product(int n, const int tomb[])
{
    int p = 1;

    for (int i = 0; i < n; ++i) {
        p *= tomb[i];
    }

    return p;
}

int main()
{
    int szamok[5] = { 73, 65, 4, 2, 7 };
    int meret = 5;

    int szorzat = product(meret, szamok);
    printf("szorzat: %d\n", szorzat);

    return 0;
}
