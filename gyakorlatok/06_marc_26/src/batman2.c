#include "prog1.h"
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        puts("Hello World!");
    }
    else
    {
        string nev = argv[1];
        if (strcmp(nev, "Batman") == 0)
        {
            puts("Denevérveszély!");
        }
        else
        {
            printf("Hello %s!\n", nev);
        }
    }

    return 0;
}
