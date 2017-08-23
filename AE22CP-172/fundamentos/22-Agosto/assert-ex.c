#include <assert.h>

int set(int i)
{
    assert(i >= 0 && i <= 10);
    
    int j = i;
}

int main() {

    set(15);
}
