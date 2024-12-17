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

int vectorint_pertence(VectorInt v, int number);

int vector_quantity(VectorInt v, int number);

void vector_print(VectorInt v);

void vector_destroy(VectorInt v);

#endif
