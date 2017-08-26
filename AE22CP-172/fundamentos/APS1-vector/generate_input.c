#include "vector.h"

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <assert.h>

#define FORMAT "%d "

#define MAX_VALUE 100

vector* rand_new_vector()
{
    vector* v = new_vector(rand() % 10);
    
    fprintf(stderr, "%d\n", v->capacity);
    
    return v;
}

void rand_push_back(vector* v)
{
    Type d = rand() % MAX_VALUE;
    vector_push_back(v, d);
    
    fprintf(stderr, "push_back %d\n", d);
    vector_print(v, FORMAT);
}

void rand_push_front(vector* v)
{
    Type d = rand() % MAX_VALUE;
    vector_push_front(v, d);
    
    fprintf(stderr, "push_front %d\n", d);
    vector_print(v, FORMAT);
}

void rand_insert(vector* v)
{
    Type d = rand() % MAX_VALUE;
    int pos = rand() % (v->size + 1);
    vector_insert(v, d, pos);
    
    fprintf(stderr, "insert %d %d\n", d, pos);
    vector_print(v, FORMAT);
}

void rand_pop_back(vector* v)
{
    vector_pop_back(v);
    fprintf(stderr, "pop_back\n");
    vector_print(v, FORMAT);
}

void rand_pop_front(vector* v)
{
    vector_pop_front(v);
    fprintf(stderr, "pop_front\n");
    vector_print(v, FORMAT);
}

void rand_erase(vector* v)
{
    int pos = rand() % v->size;
    vector_erase(v, pos);
    
    fprintf(stderr, "erase %d\n", pos);
    vector_print(v, FORMAT);
}


void rand_vector_set(vector* v)
{
    int pos = rand() % v->size;
    Type value = rand() % MAX_VALUE;
    vector_set(v, pos, value);
    
    fprintf(stderr, "set %d %d\n", pos, value);
    vector_print(v, FORMAT);
}


int main(int argc, char** argv) 
{
    assert(argc > 1);
    srand(time(NULL));
    
    int max_op = atoi(argv[1]);
    
    int noperations = rand() % max_op;
    
    vector* v = rand_new_vector();
    
    fprintf(stderr, "%d\n", noperations);
    
    int ninsertions = 0;
    for (int i = 0; i < noperations; i++)
    {
        // 70% das vezes, insere, outra metade remove
        int insert = rand() % 10000;
        
        int op = 0;
        
        if (ninsertions == 0 || insert < 6000) 
        {
            op = rand() % 3;
            switch (op) 
            {
                case 0: rand_push_back(v);  break;
                case 1: rand_push_front(v); break;
                case 2: rand_insert(v);     break;
            }
            ninsertions++;
        } else {
            op = rand() % 4;
            switch (op)
            {
                case 0: rand_pop_back(v);   break;
                case 1: rand_pop_front(v);  break;
                case 2: rand_erase(v);      break;
                case 3: rand_vector_set(v); break;
            }
            ninsertions--;
        }
    }
    free_vector(v);
}

