#include <stdio.h>

// aritmetikai műveletek: +, -, *, /, %

int main()
{
    int a = 20;
    int b = 3;

    // +
    printf("%d + %d = %d\n", a, b, a+b);

    // -
    int eredmeny = a - b;
    printf("%d - %d = %d\n", a, b, eredmeny);

    // *
    printf("%d * %d = %d\n", a, b, a*b);

    // osztás: /
    printf("%d / %d = %d\n", a, b, a/b);
    printf("20.0 / 3.0 = %lf\n", 20.0 / 3.0);

    // %
    printf("%d %% %d = %d\n", a, b, a % b);

    return 0;    
}

