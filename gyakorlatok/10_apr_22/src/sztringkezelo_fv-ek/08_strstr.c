#include <stdio.h>
#include <string.h>

int main()
{
    char url[] = "http://example.com/png_gallery/01.jpg";
    char *p;

    p = strstr(url, "png");

    if (p == NULL) {
        puts("nincs benne");
    }
    else {
        puts("benne van");
    }

    return 0;
}
