#include <stdio.h>

int sum(int n, const int tomb[])
{
    int osszeg = 0;

    for (int i = 0; i < n; ++i) {
        osszeg += tomb[i];
    }

    return osszeg;
}

float average(int n, const int tomb[])
{
    return sum(n, tomb) / (float)n;
}

int main()
{
    int szamok[10] = { 56, 46, 53, 34, 64, 37, 3, 75, 4, 3 };
    int meret = 10;

    float atlag = average(meret, szamok);
    printf("átlag: %f\n", atlag);

    return 0;
}
