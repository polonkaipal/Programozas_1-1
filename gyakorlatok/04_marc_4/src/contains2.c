#include <stdio.h>

void tomb_kiiratasa(int n, const int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

int contains(int n, const int tomb[], int k)
{
    for (int i = 0; i < n; ++i)
    {
        if (tomb[i] == k) {
            return 1;    // igaz
        }
    }

    return 0;    // hamis
}

int main()
{
    int szamok[7] = { 1, 3, 8, 7, 8, 3, 1 };
    int meret = 7;
    int keresett = 80;

    int benne_van = contains(meret, szamok, keresett);

    tomb_kiiratasa(meret, szamok);
    printf("A %d benne van?: %s\n", keresett, benne_van ? "igen" : "nem");

    return 0;
}
