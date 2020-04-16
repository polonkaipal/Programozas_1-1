#include <stdio.h>
#include <stdlib.h>

#define BUFFER 1000

int sorok_szama(const char* fname)
{
    FILE *fp = fopen(fname, "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Hiba! A %s nevű file-t nem sikerült megnyitni!\n", fname);
        exit(1);
    }

    int counter = 0;
    char line[BUFFER];

    while(fgets(line, BUFFER, fp) != NULL)
    {
        ++counter;
    }

    fclose(fp);

    return counter;
}

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "Hiba! Adja meg egy szöveges állomány nevét!\n");
        exit(1);
    }
    // különben

    char* fname = argv[1];

    int result = sorok_szama(fname);
    printf("%d\n", result);

    return 0;
}
