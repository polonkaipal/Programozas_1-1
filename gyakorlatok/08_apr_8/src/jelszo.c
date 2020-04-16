#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_strong_password(string s)
{
    int hossz = strlen(s);
    int min8 = (hossz >= 8);
    int has_lowercase = 0;
    int has_uppercase = 0;
    int has_digit = 0;

    for (int i = 0; i < hossz; ++i)
    {
        char c = s[i];

        if (islower(c)) {
            has_lowercase = 1;
        }
        if (isupper(c)) {
            has_uppercase = 1;
        }
        if (isdigit(c)) {
            has_digit = 1;
        }
    }

    return (min8 && has_lowercase && has_uppercase && has_digit);
}

int main()
{
    while (1)
    {
        string s = get_string("jelszó: ");
        if (strcmp(s, "*") == 0) {
            break;
        }
        // különben
        if (is_strong_password(s)) {
            puts("erős jelszó");
        }
        else {
            puts("gyenge jelszó");
        }
    }

    return 0;
}
