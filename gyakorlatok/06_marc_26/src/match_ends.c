#include "prog1.h"
#include <stdio.h>
#include <string.h>

/*

Bemenet: sztringeket tartalmazó tömb. Számoljuk meg, hogy a bemenetben
hány olyan sztring van, melynek a hossza legalább 2 s az
első karaktere egyezik az utolsó karakterével. A visszatérési
érték ezen feltételeket kielégítő sztringek száma legyen.

Példák (Python kóddal, majd át kell írni C-be):

match_ends(["aba", "xyz", "aa", "x", "bbb"])    ->  3
match_ends(["", "x", "xy", "xyx", "xx"])        ->  2
match_ends(["aaa", "be", "abc", "hello"])       ->  1

*/

int match_ends(int n, string words[])
{
    int counter = 0;

    for (int i = 0; i < n; ++i)
    {
        // words[i]: az aktuális szó
        string szo = words[i];
        int hossz = strlen(szo);
        if ((hossz >= 2) && (szo[0] == szo[hossz - 1])) {
            ++counter;
        }
    }

    return counter;
}

int main()
{
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak1_meret = 5;

    int result = match_ends(szavak1_meret, szavak1);
    printf("result: %d\n", result);

    // ---------------------------------

    string szavak2[] = { "", "x", "xy", "xyx", "xx" };
    int szavak2_meret = 5;

    result = match_ends(szavak2_meret, szavak2);
    printf("result: %d\n", result);

    return 0;
}
