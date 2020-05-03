#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
    A neveket lássuk el nagy kezdőbetűvel, az összes többi betűt pedig alakítsuk át kisbetűssé.

    char * capitalize(const char* name);

    void capitalize(char name[]);
*/

void capitalize(char name[])
{
    char *p = name;

    if (*p)    // ha nem üres a sztring
    {
        *p = toupper(*p);
        ++p;
        while (*p)
        {
            *p = tolower(*p);
            ++p;
        }
    }
}

int main()
{
    char name[] = "aLaDAr";

    printf("Előtte: %s\n", name);
    capitalize(name);
    printf("Utána: %s\n", name);

    return 0;
}
