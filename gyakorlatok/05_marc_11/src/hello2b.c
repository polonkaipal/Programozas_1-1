#include "prog1.h"
#include <stdio.h>

// Saját strlen() implementáció, while ciklussal.
int my_strlen(const string s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        ++i;
    }

    return i;
}

int main()
{
    string s = get_string("Neved: ");
    printf("Hello %s!\n", s);
    printf("A sztring hossza (my_strlen): %d\n", my_strlen(s));

    return 0;
}
