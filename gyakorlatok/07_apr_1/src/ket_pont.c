#include <stdio.h>

/*
    Erről is szó volt az előadáson.
*/

typedef struct {
    int x;
    int y;
} Pont;

int main()
{
    // int tomb[2] = { 1, 4 };

    Pont a = { 1, 2 };
    Pont b = { 6, 5 };

    printf("A(%d, %d)\n", a.x, a.y);
    printf("B(%d, %d)\n", b.x, b.y);

    return 0;
}
