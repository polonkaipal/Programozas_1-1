#include <stdio.h>

int get_positive_int()
{
    int szam;

    while (1)
    {
        scanf("%d", &szam);

        if (szam > 0) {
            break;
        }
        else {
            printf("Adj meg egy új számot!\n");
        }
    }

    return szam;
}

int main()
{
    printf("Adj meg egy pozitív egészet!\n");
    int szam = get_positive_int();

    printf("A megadott pozitív szám: %d\n", szam);

    return 0;
}
