typedef int Type;

typedef struct {
    Type* data;     // vetor que armazenará os inteiro;
    int  size;     // tamanho atual do vetor
    int  capacity; // tamanho reservado em memória 
} vector;


// Aloca memória inicial para o vetor
vector* new_vector(int initial_capacity);

// Desaloca a memória de v->data e do próprio v.
void free_vector(vector* v);



// Funções de remoção de elementos
Type vector_pop_back(vector* v);

Type vector_pop_front(vector* v);

Type vector_erase(vector* v, int i);



// Funções de inserção de elementos

void vector_insert(vector* v, Type value, int i);

void vector_push_back(vector* v, Type value);

void vector_push_front(vector* v, Type value);


void vector_set(vector* v, int pos, Type value);

void vector_resize(vector* v);


void vector_print(vector* v, const char* format);

