#include <stdio.h>

void tomb_kiiratasa(int n, const int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

void reverse(int n, int tomb[])
{
    int i = 0, j = n-1, tmp;

    while (i < j)
    {
        tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;
        //
        ++i;
        --j;
    }
}

int main()
{
    int szamok[10] = { 73, 65, 4, 2, 34, 3, 44, 23, 43, 24 };
    int meret = 10;

    puts("előtte");
    tomb_kiiratasa(meret, szamok);

    reverse(meret, szamok);

    puts("utána");
    tomb_kiiratasa(meret, szamok);

    return 0;
}
