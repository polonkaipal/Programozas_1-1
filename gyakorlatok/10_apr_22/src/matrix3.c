#include <stdio.h>

typedef char * string;

void kiir(int n, int m, string szavak[n][m])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            printf("%s\t\t", szavak[i][j]);
        }
        puts("");
    }
}

int main()
{
    string szavak[2][3] = {
        { "bab", "kiwi", "banan" },
        { "alma", "dio", "mogyoro" }
    };
    int sorok = 2;
    int oszlopok = 3;

    kiir(sorok, oszlopok, szavak);

    return 0;
}
