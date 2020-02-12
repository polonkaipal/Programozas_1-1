#include <stdio.h>

int main()
{
    // egész szám bekérése
    int szam;
    printf("Adj meg egy egesz szamot: ");
    scanf("%d", &szam);

    if (szam % 2 == 0)
    {
        printf("a szam paros\n");
    }
    else
    {
        printf("a szam paratlan\n");
    }


    return 0;
}
