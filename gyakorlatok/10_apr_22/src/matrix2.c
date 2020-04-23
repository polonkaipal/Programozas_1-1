#include <stdio.h>

// mátrix

void kiir(int n, int matrix[n][n])
{
    for (int sor = 0; sor < n; ++sor)
    {
        for (int oszlop = 0; oszlop < n; ++oszlop)
        {
            printf("%d\t", matrix[sor][oszlop]);
        }
        puts("");
    }
}

void kiir_foatlo(int n, int matrix[n][n])
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d\t", matrix[i][i]);
    }
    puts("");
}

int main()
{
    int matrix[4][4] = {
        {7, 6, 4, 2},
        {6, 5, 3, 2},
        {8, 7, 6, 5},
        {7, 6, 5, 6}
    };
    int n = 4;

    kiir(n, matrix);
    puts("");
    kiir_foatlo(n, matrix);

    return 0;
}
