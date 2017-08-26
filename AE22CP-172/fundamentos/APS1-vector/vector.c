#include "vector.h"

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

vector* new_vector(int initial_capacity)
{
    assert(initial_capacity >= 0);

    vector* v = malloc(sizeof(vector));
    v->capacity = initial_capacity;
    v->data = malloc(sizeof(Type) * v->capacity);
    v->size = 0;
    
    return v;
}

void free_vector(vector* v)
{
    free(v->data);
    free(v);
}

void vector_resize(vector* v)
{
    // Se o vetor está cheio, realoca o dobro do espaço atual.
    if (v->size == v->capacity) {
        v->capacity = v->capacity > 0 ? 2 * v->capacity : 10;
        v->data = realloc(v->data, sizeof(Type) * v->capacity);
    }
}

Type vector_erase(vector* v, int i)
{
    // Somente posso apagar se i está entre 0 e size
    assert(i >= 0 && i < v->size);
    
    Type value = v->data[i];
    
    // Move todos elementos após i uma posição para trás
    // v->data[i] passa a ser o que antes havia em v->data[i+1]
    for (int j = i; i < v->size; i++)
        v->data[j] = v->data[j+1];

    v->size--;
    
    return value;
}

// Funções de remoção de elementos
Type vector_pop_back(vector* v)
{
    // Somente remove o último se há ao menos um elemento
    assert(v->size > 0);
    return vector_erase(v, v->size-1);
}

Type vector_pop_front(vector* v)
{
    // Somente remove o último se há ao menos um elemento
    assert(v->size > 0);    
    return vector_erase(v, 0);
}


// Funções de inserção de elementos
void vector_insert(vector* v, Type value, int i)
{
    assert(i >= 0 && i <= v->size);
    
    // Se o vetor não está cheio, está função não fará nada.
    vector_resize(v);
    
    for (int j = v->size - 1; j >= i; j--)
        v->data[j + 1] = v->data[j];

    v->data[i] = value;
    v->size++;
}

void vector_push_back(vector* v, Type value)
{
    vector_insert(v, value, v->size);
}

void vector_push_front(vector* v, Type value)
{
    vector_insert(v, value, 0);
}

void vector_set(vector* v, int pos, Type value)
{
    // Como esta função não altera o tamanho do vetor, 
    // ela somente pode ser aplicada a índices 
    // 0 ... (v->size-1)
    assert(pos >= 0 && pos < v->size);
    
    v->data[pos] = value;
}

void vector_print(vector* v, const char* format)
{
    printf("[%d/%d] ", v->size, v->capacity);
    
    for (int i = 0; i < v->size; i++)
        printf(format, v->data[i]);
    printf("\n");
}

