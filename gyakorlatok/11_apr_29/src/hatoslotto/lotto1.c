#include <stdio.h>

#define LIMIT 45

// egyszerű kiválasztásos rendezés (egyszerű, de lassú)
void tomb_rendez(int n, int tomb[])
{
    int i, j, temp;

    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (tomb[j] < tomb[i])
            {
                temp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = temp;
            }
        }
    }
}

void tomb_kiir(int n, int tomb[])
{
    int i;

    for (i = 0; i < n; ++i) {
        printf("%d ", tomb[i]);
    }
    printf("\n");
}

int main()
{
    int cnt = 0;

    for (int a = 1; a <= LIMIT; ++a)
    {
        for (int b = 1; b <= LIMIT; ++b)
        {
            for (int c = 1; c <= LIMIT; ++c)
            {
                for (int d = 1; d <= LIMIT; ++d)
                {
                    for (int e = 1; e <= LIMIT; ++e)
                    {
                        for (int f = 1; f <= LIMIT; ++f)
                        {
                            ++cnt;

                            if ((a + b + c + d + e + f == 90) && (a * b * c * d * e * f == 996300))
                            {
                                int szamok[] = { a, b, c, d, e, f };
                                int n = sizeof(szamok) / sizeof(szamok[0]);

                                tomb_rendez(n, szamok);
                                tomb_kiir(n, szamok);

                                printf("# counter: %d\n", cnt);

                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
