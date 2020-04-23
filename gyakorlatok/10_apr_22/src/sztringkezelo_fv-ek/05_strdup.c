#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char text[] = "hello";

    char *copy = strdup(text);

    text[0] = 'H';

    puts(text);
    puts(copy);

    free(copy);

    return 0;
}
