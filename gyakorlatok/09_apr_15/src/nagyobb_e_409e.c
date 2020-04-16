#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 1000

const char* INPUT = "in.txt";
const char* OUTPUT = "out.txt";

int main()
{
    FILE *fp = fopen(INPUT, "r");
    FILE *out = fopen(OUTPUT, "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Hiba! A %s nevű file-t nem sikerült megnyitni olvasásra!\n", INPUT);
        exit(1);
    }
    printf("# %s sikeresen megnyitva\n", INPUT);

    if (out == NULL)
    {
        fprintf(stderr, "Hiba! A %s nevű file-t nem sikerült megnyitni írásra!\n", OUTPUT);
        exit(1);
    }
    // különben

    char line[BUFFER];

    while(fgets(line, BUFFER, fp) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        double ertek = atof(line);
        if (ertek > 0.5)
        {
            fprintf(out, "%s\n", line);
        }
    }

    fclose(out);
    fclose(fp);

    return 0;
}
