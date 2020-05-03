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
    int hossz = strlen(name);

    if (hossz > 0)
    {
        name[0] = toupper(name[0]);
        for (int i = 1; i < hossz; ++i)
        {
            name[i] = tolower(name[i]);
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
