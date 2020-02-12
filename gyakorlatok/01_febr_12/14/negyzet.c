#include <stdio.h>

// négyzet kerülete, területe

int main()
{
    int oldal;
    printf("Add meg a negyzet oldalat (cm): ");
    scanf("%d", &oldal);

    int kerulet = 4 * oldal;
    printf("A negyzet kerulete: %d cm.\n", kerulet);

    int terulet = oldal * oldal;
    printf("A negyzet terulete: %d cm2.\n", terulet);

    return 0;    
}

