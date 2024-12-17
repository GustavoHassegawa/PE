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
        v->data = realloc(v->data,v->capacity * 2 * sizeof(int));
        v->capacity *= 2;
    }
    v->data[v->nelements] = a;
    v->nelements++;
}

void vectorint_remove(VectorInt v, int a) {
    int i, j = 0;

    for (i = 0; i < v->nelements; i++) {
        if (v->data[i] != a) {
            v->data[j] = v->data[i];
            j++;
        }
    }
    v->nelements = j;
    
    if (v->nelements < v->capacity/2) {
        v->capacity = v->capacity/2;
        v->data = realloc(v->data, v->capacity * sizeof(int));
    }

}

int vectorint_at(VectorInt v, int i) {
    return v->data[i];
}

int vectorint_pertence(VectorInt v, int number){
	for (int i = 0; i < v->nelements; i++)
		if (v->data[i] == number)
			return 1;
			
	return 0;
}

int vector_quantity(VectorInt v, int number) {
	int quantity = 0;
	
	for (int i = 0; i < v->nelements; i++)
		if (v->data[i] == number)
			quantity++;
			
	return quantity;
}

void vector_print(VectorInt v) {
	printf("%d", v->data[0]);
	
	for (int i = 1; i < v->nelements; i++)
		printf(", %d", v->data[i]);
	
	printf("\n");
}
	

void vector_destroy(VectorInt v){
	free(v->data);
	free(v);
}
