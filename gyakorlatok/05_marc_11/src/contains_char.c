#include "prog1.h"
#include <stdio.h>
#include <string.h>

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

// Az s alapsztringben benne van-e a c karakter?
// Visszatérési érték: logikai igaz, ha benne van, különben logikai hamis.
int contains_char(const string s, char c)
{
    return find_char(s, c) >= 0;
}

int main()
{
    string s = "Laci";
    char c = 'x';

    int poz = find_char(s, c);
    printf("%d\n", poz);

    return 0;
}
