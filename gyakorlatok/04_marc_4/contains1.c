#include <stdio.h>

void tomb_kiir(int n, const int tomb[])
{
    for (int i = 0; i < n; ++i) {
        printf("%d ", tomb[i]);
    }
    puts("");    // printf("\n");
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
    int t1[5] = { 1, 3, 5, 3, 1 };
    int t1_meret = 5;
    int keresett = 3;

    int benne_van = contains(t1_meret, t1, keresett);
    printf("t1-ben benne van a %d?: %d\n", keresett, benne_van);

    return 0;
}
