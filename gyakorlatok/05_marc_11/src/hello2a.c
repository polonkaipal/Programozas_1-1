#include "prog1.h"
#include <stdio.h>

// Saját strlen() implementáció, for ciklussal.
int my_strlen(const string s)
{
    int cnt = 0;

    for (int i = 0; s[i] != '\0'; ++i)
    {
        ++cnt;
    }

    return cnt;
}

int main()
{
    string s = get_string("Neved: ");
    printf("Hello %s!\n", s);
    printf("A sztring hossza (my_strlen): %d\n", my_strlen(s));

    return 0;
}
