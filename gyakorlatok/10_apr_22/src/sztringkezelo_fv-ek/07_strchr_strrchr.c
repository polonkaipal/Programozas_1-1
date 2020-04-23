#include <stdio.h>
#include <string.h>

int main()
{
    //             v                    v
    char text[] = "jfhsfs X jfgdjgfjdgf X   jfgdjgfdgf";
    char *p;

    // p = strchr(text, 'j');
    p = strrchr(text, 'X');

    if (p == NULL) {
        puts("nincs benne");
    }
    else {
        printf("benne van; index pozíciója: %d\n", p - text);
    }

    return 0;
}
