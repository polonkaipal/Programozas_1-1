#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    char hw[] = "Hello, World!";

    strcpy(text, hw);

    // strncpy()

    printf("%s\n", text);

    return 0;
}
