#include "prog1.h"
#include <stdio.h>
#include <string.h>

// Eldönti egy szóról, hogy palindróm-e vagy sem.
int is_palindrome(const string s)
{
    int i = 0, j = strlen(s) - 1;

    while (i < j)
    {
        if (s[i] != s[j]) {
            return 0;
        }
        ++i;
        --j;
    }

    return 1;
}

int main()
{
    string s = get_string("Szó: ");
    if (is_palindrome(s))
    {
        puts("palindróm");
    }
    else
    {
        puts("NEM palindróm");
    }

    return 0;
}
