#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL) {
        exit(1);
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    list = realloc(list, 4 * sizeof(int));

    list[3] = 4;

    for (int i = 0; i < 4; ++i)
    {
        printf("%d\n", list[i]);
    }

    free(list);

    return 0;
}
