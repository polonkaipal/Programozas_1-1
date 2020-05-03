#include <stdio.h>
#include "array_utils.h"

void hatoslotto()
{
    int cnt = 0;

    for (int a = 1; a <= LIMIT; ++a)
    {
        for (int b = a+1; b <= LIMIT; ++b)
        {
            for (int c = b+1; c <= LIMIT; ++c)
            {
                for (int d = c+1; d <= LIMIT; ++d)
                {
                    for (int e = d+1; e <= LIMIT; ++e)
                    {
                        for (int f = e+1; f <= LIMIT; ++f)
                        {
                            ++cnt;

                            if ((a + b + c + d + e + f == 90) && (a * b * c * d * e * f == 996300))
                            {
                                int szamok[] = { a, b, c, d, e, f };
                                int n = sizeof(szamok) / sizeof(szamok[0]);

                                tomb_rendez(n, szamok);
                                tomb_kiir(n, szamok);

                                printf("# counter: %d\n", cnt);

                                return;
                            }
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    hatoslotto();

    puts("END");

    return 0;
}
