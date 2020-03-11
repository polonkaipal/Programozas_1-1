#include "prog1.h"
#include <stdio.h>
#include <string.h>

int main()
{
    string s = get_string("Neved: ");
    printf("Hello %s!\n", s);
    printf("A sztring hossza: %ld\n", strlen(s));

    return 0;
}
