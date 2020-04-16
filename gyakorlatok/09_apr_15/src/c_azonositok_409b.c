#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_c_identifier(const char* input)
{
    int hossz = strlen(input);
    if (hossz < 1) {
        return 0;
    }
    // különben, ha a hossz >= 1

    if (isdigit(input[0])) {
        return 0;
    }
    // különben, nincs számjegy az elején

    for (int i = 0; i < hossz; ++i)
    {
        char c = input[i];
        // if (!(isalnum(c) || (c == '_')))
        // if (!(isalnum(c) || (c == '_')))    // !(A or B) ekv. !A and !B
        if (!isalnum(c) && (c != '_'))
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    // const char* word = "i";
    // const char* word = "long_and_mnemonic_identifier";
    // const char* word = "";
    // const char* word = "it_contains_1number";
    // const char* word = "it_contains_CapitalLetters";
    // const char* word = "dot.is_not_accepted";
    // const char* word = "1variable";
    // const char* word = "thisiscorrectalthoughthewordsarenotseparated";
    // const char* word = "_";
    // const char* word = "_foo";
    // const char* word = "foo_";
    // const char* word = "_foo_";
    // const char* word = "foo_bar";
    const char* word = "foo__bar";
    // const char* word = "a1234";
    // const char* word = "a1234_2414";
    // const char* word = "a1234_2_414";
    // const char* word = "a1234__2414";

    if (is_valid_c_identifier(word)) {
        puts("YES");
    }
    else {
        puts("NO");
    }

    return 0;
}
