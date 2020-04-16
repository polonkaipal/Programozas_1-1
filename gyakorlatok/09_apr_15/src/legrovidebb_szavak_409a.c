#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef char * string;

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "Nem adtál meg egyetlen szót sem!\n");
        exit(1);
    }
    // különben

    int min = INT_MAX;
    for (int i = 1; i < argc; ++i)
    {
        string elem = argv[i];
        int hossz = strlen(elem);
        if (hossz < min) {
            min = hossz;
        }
    }

    for (int i = 1; i < argc; ++i)
    {
        string elem = argv[i];
        if (strlen(elem) == min) {
            puts(elem);
        }
    }

    return 0;
}
