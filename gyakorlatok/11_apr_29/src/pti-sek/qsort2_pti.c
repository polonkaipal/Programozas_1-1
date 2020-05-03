#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100
#define BUFSIZE 100

typedef char * string;

typedef struct {
    char nev[20];
    int kor;
    char szak[5];
} Hallgato;

void print_hallgato(const Hallgato *h)
{
    printf("nev: %s, kor: %d, szak: %s\n", h->nev, h->kor, h->szak);
}

int feltolt(const char* fname, int n, Hallgato tomb[])
{
    int index = 0;
    FILE *fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Hiba!\n");
        exit(1);
    }

    char sor[BUFSIZE];
    char *p;
    string nev;
    int kor;
    string szak;

    while (fgets(sor, BUFSIZE, fp) != NULL)
    {
        sor[strlen(sor) - 1] = '\0';

        p = strtok(sor, ",");
        nev = p;
        p = strtok(NULL, ",");
        kor = atoi(p);
        p = strtok(NULL, ",");
        szak = p;

        Hallgato h;
        strcpy(h.nev, nev);
        h.kor = kor;
        strcpy(h.szak, szak);

        tomb[index] = h;
        ++index;
    }

    fclose(fp);

    return index;    // betett elemek száma
}

void lowercase(char text[])
{
    int hossz = strlen(text);

    for (int i = 0; i < hossz; ++i)
    {
        text[i] = tolower(text[i]);
    }
}

int kiszur_ptisek(int n, Hallgato tomb[n], Hallgato ptisek[])
{
    int index = 0;

    for (int i = 0; i < n; ++i)
    {
        Hallgato h = tomb[i];
        lowercase(h.szak);
        if (strcmp(h.szak, "pti") == 0)
        {
            ptisek[index] = tomb[i];
            ++index;
        }
    }

    return index;
}

// egyszerű kiválasztásos rendezés (egyszerű, de lassú)
// void tomb_rendez(int n, Hallgato tomb[])
// {
//     int i, j;
//     Hallgato temp;

//     for (i = 0; i < n - 1; ++i)
//     {
//         for (j = i + 1; j < n; ++j)
//         {
//             if (strcmp(tomb[j].nev, tomb[i].nev) < 0)
//             {
//                 temp = tomb[i];
//                 tomb[i] = tomb[j];
//                 tomb[j] = temp;
//             }
//         }
//     }
// }

/*
    Ha bal < jobb, akkor adjon vissza egy negatív értéket.
    Ha bal == jobb, akkor 0-t adjon vissza.
    Ha bal > jobb, akkor adjon vissza egy pozitív értéket.
*/
int cmp(const void *bal, const void *jobb)
{
    const Hallgato *a = bal;
    const Hallgato *b = jobb;

    return strcmp(a->nev, b->nev);
}

int main()
{
    const char* fname = "nevek.csv";
    Hallgato tomb[MAX];

    int elemszam = feltolt(fname, MAX, tomb);

    // for (int i = 0; i < elemszam; ++i)
    // {
        // print_hallgato(&tomb[i]);
    // }

    // puts("----------------------");

    Hallgato ptisek[MAX];
    int ptis_elemszam = kiszur_ptisek(elemszam, tomb, ptisek);

    // tomb_rendez(ptis_elemszam, ptisek);

    qsort(ptisek, ptis_elemszam, sizeof(Hallgato), cmp);

    for (int i = 0; i < ptis_elemszam; ++i)
    {
        print_hallgato(&ptisek[i]);
    }

    return 0;
}
