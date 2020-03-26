#include <stdio.h>

#define SIZE 26

// void feltolt(char tomb[])
// {
//     for (int i = 0; i < SIZE; ++i)
//     {
//         tomb[i] = (char)((int)'a' + i);
//     }
// }

void feltolt(char tomb[])
{
    for (char c = 'a'; c <= 'z'; ++c)
    {
        tomb[c - 'a'] = c;
    }
}

int main()
{
    char abece[SIZE];

    feltolt(abece);

    puts("Az angol ábécé:");
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%c ", abece[i]);
    }
    puts("");

    return 0;
}
