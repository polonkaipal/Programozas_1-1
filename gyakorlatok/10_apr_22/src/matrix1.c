#include <stdio.h>

// mátrix

void kiir(int sorok, int oszlopok, int matrix[sorok][oszlopok])
{
    for (int sor = 0; sor < sorok; ++sor)
    {
        for (int oszlop = 0; oszlop < oszlopok; ++oszlop)
        {
            printf("%d\t", matrix[sor][oszlop]);
        }
        puts("");
    }
}

int get_elemek_osszege(int n, int m, int matrix[n][m])
{
    int osszeg = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            osszeg += matrix[i][j];
        }
    }

    return osszeg;
}

int main()
{
    int matrix[4][6] = {
        {7, 6, 4, 2, 6, 3},
        {6, 5, 3, 2, 3, 9},
        {8, 7, 6, 5, 2, 7},
        {7, 6, 5, 6, 6, 3}
    };
    int sorok = 4;
    int oszlopok = 6;

    kiir(sorok, oszlopok, matrix);

    puts("");
    int osszeg = get_elemek_osszege(sorok, oszlopok, matrix);
    printf("Elemek összege: %d\n", osszeg);

    return 0;
}
