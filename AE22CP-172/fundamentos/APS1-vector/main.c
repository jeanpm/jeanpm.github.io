#include "vector.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define FORMAT "%d "

int main() 
{
    int capacidade = 0;
    scanf("%d", &capacidade);
    
    vector* v = new_vector(capacidade);
    
    
    int ncmds = 0;
    scanf("%d", &ncmds);
    
    char cmd[20];
    int  indice;
    int  valor;
    
    while (ncmds-- > 0)
    {
        scanf("%s", cmd);
        
        if (strcmp(cmd, "push_back") == 0)
        {
            scanf("%d", &valor);
            vector_push_back(v, valor);
        } else if (strcmp(cmd, "push_front") == 0)
        {
            scanf("%d", &valor);
            vector_push_front(v, valor);
        } else if (strcmp(cmd, "insert") == 0)
        {
            scanf("%d", &valor);
            scanf("%d", &indice);
            vector_insert(v, valor, indice);
        } else if (strcmp(cmd, "pop_back") == 0)
        {
            vector_pop_back(v);
        } else if (strcmp(cmd, "pop_front") == 0)
        {
            vector_pop_front(v);
        } else if (strcmp(cmd, "erase") == 0)
        {
            scanf("%d", &indice);
            vector_erase(v, indice);
        } else if (strcmp(cmd, "set") == 0)
        {
            scanf("%d", &indice);
            scanf("%d", &valor);
            vector_set(v, indice, valor);
        }
        vector_print(v, FORMAT);
    }
    
    
    free_vector(v);
}

