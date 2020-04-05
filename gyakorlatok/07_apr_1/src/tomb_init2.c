#include <stdio.h>

void kiir(int n, int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

int main()
{
    int meret = 10;
    int tomb[meret];

    for (int i = 0; i < meret; ++i) {
        tomb[i] = 0;
    }

    kiir(meret, tomb);

    return 0;
}
