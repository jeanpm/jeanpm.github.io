
#include <stdlib.h>

char* at(char* c, int i) {
    return &c[i];
}
int main() {    
    char* ptr = malloc(sizeof(char) * 10);  
    *at(ptr, 5) = 'j';
    
    return 0;
}
