#include "prog1.h"
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        puts("Hello World!");
    }
    else
    {
        string nev = argv[1];
        printf("Hello %s!\n", nev);
    }

    return 0;
}
