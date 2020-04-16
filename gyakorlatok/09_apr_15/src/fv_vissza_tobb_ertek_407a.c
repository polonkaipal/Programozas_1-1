#include <stdio.h>

typedef struct {
    int a;
    int b;
    double c;
} IntIntDouble;


IntIntDouble get_result()
{
    IntIntDouble result;
    result.a = 2;
    result.b = 5;
    result.c = 12.34;

    return result;
}

int main()
{
    IntIntDouble result = get_result();
    printf("A visszaadott értékek: %d, %d, %.2lf\n", result.a, result.b, result.c);

    return 0;
}
