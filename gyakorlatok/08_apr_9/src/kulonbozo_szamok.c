#include <stdio.h>

void kiir_tomb(int n, int tomb[])
{
    for (int i = 0; i < n; ++i) {
        printf("%d ", tomb[i]);
    }
    puts("");
}

int contains(int n, int tomb[], int elem)
{
    for (int i = 0; i < n; ++i)
    {
        if (tomb[i] == elem) {
            return 1;
        }
    }
    // else
    return 0;
}

int main()
{
    int n = 0;
    int tomb[5];

    puts("Adj meg 5 különböző számot!");
    while (1)
    {
        int szam;
        puts("");
        printf("Szám: ");
        scanf("%d", &szam);

        if (!contains(n, tomb, szam))
        {
            tomb[n] = szam;
            ++n;
            kiir_tomb(n, tomb);
        }
        else
        {
            puts("Ez a szám már szerepelt!");
            kiir_tomb(n, tomb);
        }

        if (n == 5) {
            break;
        }
    }

    return 0;
}
