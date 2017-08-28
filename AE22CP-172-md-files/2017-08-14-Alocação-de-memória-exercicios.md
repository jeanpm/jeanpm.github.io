---
layout: post
title: Exercícios II (Memória, ponteiros)
description: 
author: jean
category: 
tags: estruturas-c
finished: false
date: "2017-08-15 13:50"
---

## Referências
  - Material sobre linguagem C ([IME-USP](https://www.ime.usp.br/~slago/slago-C.pdf))
  
    + *https://www.ime.usp.br/~slago/slago-C.pdf*
  
  - Material sobre memória e ponteiros ([cap2::stanford](http://cslibrary.stanford.edu/102/PointersAndMemory.pdf))
  
    + *http://cslibrary.stanford.edu/102/PointersAndMemory.pdf*
  
  - Notas sobre estruturas de dados e programação ([cap4:yale](http://cs-www.cs.yale.edu/homes/aspnes/classes/223/notes.pdf))
  
    + *http://cs-www.cs.yale.edu/homes/aspnes/classes/223/notes.pdf*
  
  - Livro ([cap11.9:Write greate code](http://pdf.th7.cn/down/files/1312/write_great_code_volume_1.pdf))
  
    + *http://pdf.th7.cn/down/files/1312/write_great_code_volume_1.pdf*
  
  - [stackoverflow:O que são e onde estão o stack e heap?](https://pt.stackoverflow.com/questions/3797/o-que-s%C3%A3o-e-onde-est%C3%A3o-o-stack-e-heap)
  
    + *https://pt.stackoverflow.com/questions/3797/o-que-s%C3%A3o-e-onde-est%C3%A3o-o-stack-e-heap*
  
  
  - LEIA LIVROS SOBRE PROGRAMAÇÃO!
  
# Exercícios
 


1. Qual o conteúdo das variáveis?    	
    ```cpp
    int main() {
	    int c = 10;
	    int* d = &c;	
	    *d = 20;		
	    printf("%d", c);
    }
    ```
		
2. Qual o conteúdo das variáveis?
    ```cpp		
    void soma(int a, int b, int* c) {
	    *c = a + b;
    }		
    int main() {
	    int c = 10;	
	    soma(5, 3, &c);
	    printf("%d", c);
    }
    ```

3. Qual o conteúdo das variáveis?
    ```cpp
    int main() {
	    int c = 10;
	    int* d = &c;	
	    scanf("%d", d);
    }
    ```
		
4. Qual o conteúdo das variáveis?
    ```cpp
    int main() {
	    int c = 10;
	    int* d = &c;	
	    d[0] = 20;		
	    printf("%d", c);
    }
    ```
		

5. Aloque memória no Heap (dinâmica) para um vetor de double de tamanho n
    ```cpp 
    int n = 100;
    double vetor_na_pilha[n];
    double* vetor_no_heap = //complete;
    ```   

6. Qual das formas abaixo nos permite acessar o primeiro elemento do vetor?
    ```cpp
    a) vetor_no_heap[0]
    b) *vetor_no_heap
    c) vetor_no_heap
    d) vetor_no_heap->[0]
    ```

7. Qual o tamanho das variáveis a e b abaixo? 
    ```cpp 
    int a[10];
    int* b = malloc( sizeof(int) * 10 );
    char* c = malloc( sizeof(char) * 10 );
    // sizeof(a);
    // sizeof(b);
    // sizeof(c);
    // sizeof(*a);
    // sizeof(*b);
    // sizeof(*c);
    ``` 


8. Altere o código abaixo para que a memória da estrutura `Pessoa` seja alocada no heap.
    ```cpp
    #include <stdio.h>
    #include <stdlib.h>
    #define MAX_SIZE_NOME 20
    typedef struct {
        int idade;
        long cpf;
        char nome[MAX_SIZE_NOME];
    } Pessoa;
    ```
    ```cpp
    void ler_pessoa(Pessoa* p) {
	    scanf("%s%d%ld", p->nome, &(p->idade), &(p->cpf));
    }
    ```
    ```cpp
    int main() {
        Pessoa w;
        ler_pessoa(&w);
    }
    ```
  
9. Implemente uma função chamada `swap`, a qual recebe a referência para dois inteiros e troca seus conteúdos.
    ```cpp
    // Se *a == 4 e *b == 3
    void swap(int* a, int* b);
    // Agora *a == 3 e *b == 4
    ```
  

10. Implemente uma função que aloque espaço inicial para uma matriz de dimensões $n\times n$. Essa função deve implementar o seguinte cabeçalho:
```cpp
// Aloca espaço para uma matrix n x n.
// retorna um ponteiro para a memória alocada.
int** new_matrix(int n);
```  

11. Implemente uma função que inicialize a matriz com determinado valor e outra que a imprima.
```cpp
void init_matrix(int** matrix, int n, int value);
void print_matrix(int** matrix, int n);
```

12. A cada chamada à `malloc` deve existir uma chamada `free` associada. Implemente uma função que libere o espaço de memória alocado pela função anterior. Essa função deve implementar o seguinte cabeçalho:
```cpp
void free_matrix(int** matrix);
```
    
13. O que faz o seguinte código?
    ```cpp
    char* at(char* c, int i) {
        return &c[i];
    }
    int main() {    
        char* ptr = malloc(sizeof(char) * 10);  
        *at(ptr, 5) = 'j';
        print(ptr, 10);
        return 0;
    }
    ```
