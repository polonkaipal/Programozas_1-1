#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        // 7-es érték "átugrása"
        if (i == 7) {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
