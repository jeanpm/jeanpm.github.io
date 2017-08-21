#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* at(char* c, int i) {
    return &c[i];
}

void print(char* c, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", c[i]);
    printf("\n");
}

int main() {    
    char* ptr = malloc(sizeof(char) * 10);  
    *at(ptr, 5) = 12;
    print(ptr, 10);
    return 0;
}
