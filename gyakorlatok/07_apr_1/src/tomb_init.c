#include <stdio.h>

#define N 10

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
    int tomb[N] = { 0 };

    kiir(N, tomb);

    return 0;
}
