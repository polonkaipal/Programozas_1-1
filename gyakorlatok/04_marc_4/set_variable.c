#include <stdio.h>

void set_variable(int x)
{
    printf("előtte: %d\n", x);
    x = 42;
    printf("utána: %d\n", x);
}

int main()
{
    int a = 5;

    set_variable(a);

    printf("a (main): %d\n", a);

    return 0;
}
