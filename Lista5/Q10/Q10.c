#include <stdio.h>
#include <stdlib.h>
#include "Q10.h"

VectorInt vectorint(void) {
    VectorInt vector = malloc(sizeof(VectorInt));
    vector->capacity = 1;
    vector->nelements = 0;
    vector->data = malloc(sizeof(int));
    return vector;
}

void vectorint_insert(VectorInt v, int a) {
    if (v->capacity == v->nelements) {
        v = malloc(v->capacity * 2 * sizeof(int));
        v->capacity *= 2;
    }
    v->data[v->nelements] = a;
    v->nelements++;
}
