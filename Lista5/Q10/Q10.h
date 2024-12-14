#ifndef QUESTAO10
#define QUESTAO10

typedef struct {
    int* data;
    int capacity;
    int nelements;
}* VectorInt;

VectorInt vectorint(void);

void vectorint_insert(VectorInt v, int a);

void vectorint_remove(VectorInt v, int a);

int vectorint_at(VectorInt v, int i);

#endif