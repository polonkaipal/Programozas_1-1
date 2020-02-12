#include <stdio.h>

int main()
{
    // egész szám bekérése
    int oldal;
    printf("Az oldal hossza (cm-ben): ");
    scanf("%d", &oldal);

    int kerulet = 4 * oldal;
    int terulet = oldal * oldal;

    printf("A negyzet kerulete: %d cm\n", kerulet);
    printf("A negyzet terulete: %d cm2\n", terulet);

    return 0;
}
