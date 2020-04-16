#include <stdio.h>
#include <stdlib.h>

// egyszerű kiválasztásos rendezés (egyszerű, de lassú)
// egy rendezett másolattal tér vissza
int * sorted(const int n, const int eredeti[])
{
    int *copy = malloc(n * sizeof(int));
    // eredeti tömbről másolat
    for (int i = 0; i < n; ++i) {
        copy[i] = eredeti[i];
    }

    // a másolat rendezése
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (copy[j] < copy[i])
            {
                int temp = copy[i];
                copy[i] = copy[j];
                copy[j] = temp;
            }
        }
    }

    return copy;
}

void tomb_kiiratasa(int n, int tomb[])
{
    for (int i = 0; i < n; ++i) {
        printf("%d ", tomb[i]);
    }
    printf("\n");
}

int main()
{
    int szamok[] = { 45, 84, 36, 57, 65, 43, 45, 43, 56, 17 };
    int n = sizeof(szamok) / sizeof(szamok[0]);

    int *rendezett = sorted(n, szamok);

    tomb_kiiratasa(n, szamok);      // 45, 84, 36, ... (rendezetlen)
    tomb_kiiratasa(n, rendezett);   // (rendezett)

    free(rendezett);

    return 0;
}
