
#include <stdlib.h>

typedef char Type;

Type* at(Type* c, int i) {
    return &c[i];
}



int main() {    
    Type* ptr = malloc(sizeof(Type) * 10);  
    *at(ptr, 5) = 'j';
    
    return 0;
}
