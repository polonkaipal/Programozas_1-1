#include <stdio.h>
#include <stdlib.h>

void tomb_kiir(int n, int tomb[])
{
    int i;

    for (i = 0; i < n; ++i) {
        printf("%d ", tomb[i]);
    }
    printf("\n");
}

/*
    Ha bal < jobb, akkor adjon vissza egy negatív értéket.
    Ha bal == jobb, akkor 0-t adjon vissza.
    Ha bal > jobb, akkor adjon vissza egy pozitív értéket.
*/
int cmp(const void *bal, const void *jobb)
{
    const int *a = bal;
    const int *b = jobb;

    return *a - *b;
}

int main()
{
    int szamok[] = { 88, 56, 100, 2, 25 };

    puts("Előtte:");
    tomb_kiir(5, szamok);

    puts("");

    qsort(szamok, 5, sizeof(int), cmp);

    puts("Utána:");
    tomb_kiir(5, szamok);

    return 0;
}
