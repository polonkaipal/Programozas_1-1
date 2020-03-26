#include "prog1.h"
#include <stdio.h>
#include <string.h>

int main()
{
    string s = get_string("Mi a neved: ");

    printf("Hello %s!\n", s);

    return 0;
}
