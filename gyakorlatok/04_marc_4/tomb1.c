#include <stdio.h>

void tomb_kiir(int n, int tomb[])
{
    for (int i = 0; i < n; ++i) {
        printf("%d ", tomb[i]);
    }
    puts("");    // printf("\n");

    tomb[0] = 999;    // HIBA! Módosítottuk a tömböt!
}

int main()
{
    int szamok[10] = { 56, 46, 53, 34, 64, 37, 3, 75, 4, 3 };
    int meret = 10;

    puts("A tömb elemei:");
    tomb_kiir(meret, szamok);

    printf("szamok[0]: %d\n", szamok[0]);

    return 0;
}
