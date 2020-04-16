#include <stdio.h>

typedef struct {
    int x;
    int y;
} Pont;

void kiir(Pont p, const char* nev)
{
    printf("%s(%d, %d)\n", nev, p.x, p.y);
}

Pont origo()
{
    Pont o = { 0, 0 };
    return o;
}

int main()
{
    Pont a = { 1, 2 };          // int x = 5;

    Pont b = a;                 // int y = x;
    b.x = 100;

    Pont c = origo();

    kiir(a, "A");

    kiir(b, "B");

    kiir(c, "C");

    return 0;
}
