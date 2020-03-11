#include "prog1.h"
#include <stdio.h>
#include <string.h>

// Az s alapsztringben keressük a c karakter első előfordulásának a helyét.
// Visszatérési érték: a c első előfordulásának az indexe az s-ben.
// Ha nincs benne: -1 a visszatérési érték.
int find_char(const string s, char c)
{
    int n = strlen(s);
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string s = "Laci";
    char c = 'i';

    int poz = find_char(s, c);
    printf("%d\n", poz);

    return 0;
}
