#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 1000

const char* INPUT = "valos_szamok.txt";

void replace_char(char text[], char mit, char mire)
{
    int hossz = strlen(text);
    for (int i = 0; i < hossz; ++i)
    {
        if (text[i] == mit)
        {
            text[i] = mire;
            break;
        }
    }
}

double get_sum(const char* fname)
{
    FILE *fp = fopen(fname, "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Hiba! A %s nevű file-t nem sikerült megnyitni olvasásra!\n", fname);
        exit(1);
    }
    // különben

    double total = 0.0;
    char line[BUFFER];

    while(fgets(line, BUFFER, fp) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        replace_char(line, ',', '.');
        total += atof(line);
    }

    fclose(fp);

    return total;
}

int main()
{
    double osszeg = get_sum(INPUT);
    printf("%.20lf\n", osszeg);

    return 0;
}
