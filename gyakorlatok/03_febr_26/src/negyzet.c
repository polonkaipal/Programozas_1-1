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

        printf("Adj meg egy új számot!\n");
    }

    return szam;
}

int kerulet(int a) {
    return 4 * a;
}

int terulet(int a) {
    return a * a;
}

// ----------------------------------------------

int main()
{
    printf("Add meg a négyzet oldalhosszát [egész] (cm)!\n");
    int oldal = get_positive_int();

    int k = kerulet(oldal);
    int t = terulet(oldal);

    printf("kerület: %d cm\n", k);
    printf("terület: %d cm2\n", t);

    return 0;
}
