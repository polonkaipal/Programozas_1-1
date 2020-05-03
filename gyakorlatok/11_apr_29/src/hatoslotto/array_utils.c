#include "array_utils.h"
#include <stdio.h>

// egyszerű kiválasztásos rendezés (egyszerű, de lassú)
void tomb_rendez(int n, int tomb[])
{
    int i, j, temp;

    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (tomb[j] < tomb[i])
            {
                temp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = temp;
            }
        }
    }
}

void tomb_kiir(int n, int tomb[])
{
    int i;

    for (i = 0; i < n; ++i) {
        printf("%d ", tomb[i]);
    }
    printf("\n");
}
