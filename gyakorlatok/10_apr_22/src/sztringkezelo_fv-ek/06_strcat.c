#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100] = "hello ";
    char s2[] = "world";

    strcat(s1, s2);

    // strncat

    puts(s1);
    puts(s2);

    return 0;
}
