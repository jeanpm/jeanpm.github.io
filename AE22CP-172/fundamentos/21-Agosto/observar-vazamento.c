#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main() {    
    char* ptr[10];
    for (int i = 0; i < 10; i++)
        ptr[i] = malloc(sizeof(char) * 1000);  
    free(ptr);    
    return 0;
}
