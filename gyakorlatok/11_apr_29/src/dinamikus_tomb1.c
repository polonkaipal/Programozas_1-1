#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 2
#define MULTIPLIER 1.5

typedef struct {
    int *elems;    // a dinamikusan lefoglalt tömbre mutat
    int length;    // a betett elemek száma
    int capacity;  // a tömb fizikai kapacitása
                   // capacity >= length
} DynArray;

void mem_error_exit()
{
    fprintf(stderr, "Error: cannot allocate memory\n");
    exit(1);
}

DynArray * da_create()
{
    DynArray *result = malloc(sizeof(DynArray));
    if (result == NULL) {
        mem_error_exit();
    }

    result->elems = malloc(INITIAL_CAPACITY * sizeof(int));
    if (result->elems == NULL) {
        mem_error_exit();
    }
    result->length = 0;
    result->capacity = INITIAL_CAPACITY;

    return result;
}

void da_clear(DynArray *self)
{
    free(self->elems);

    self->elems = malloc(INITIAL_CAPACITY * sizeof(int));
    self->length = 0;
    self->capacity = INITIAL_CAPACITY;
}

void da_append(DynArray *self, int data)
{
    if (self->length == self->capacity)
    {
        int new_capacity = (int)(MULTIPLIER * self->capacity);
        self->elems = realloc(self->elems, new_capacity * sizeof(int));
        puts("# újraallokálás történt");
        if (self->elems == NULL) {
            mem_error_exit();
        }
        self->capacity = new_capacity;
    }
    //
    self->elems[self->length] = data;
    self->length += 1;
}

void * da_destroy(DynArray *self)
{
    free(self->elems);
    free(self);
    //
    return NULL;
}

void da_print(DynArray *self)
{
    for (int i = 0; i < self->length; ++i) {
        printf("%d ", self->elems[i]);
    }
    puts("");
}

int main()
{
    DynArray *li = da_create();

    for (int i = 1; i <= 5; ++i) {
        da_append(li, i);
    }

    da_print(li);

    da_clear(li);

    puts("------------");

    for (int i = 10; i <= 15; ++i) {
        da_append(li, i);
    }

    da_print(li);

    li = da_destroy(li);

    return 0;
}
