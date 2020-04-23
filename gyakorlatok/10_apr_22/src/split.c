#include <stdio.h>
#include <string.h>

int main()
{
    // char sor[] = "aa   bbb    cc     d";
    char sor[] = "aa,;;,bbb,,,cc";
    char *p;

    p = strtok(sor, ",;");
    while (p != NULL)
    {
        printf("%s\n", p);
        p = strtok(NULL, ";,");
    }

    return 0;
}
