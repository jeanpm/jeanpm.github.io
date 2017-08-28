---
layout: post
title: Organização de memória, stack, heap IV
description: 
author: jean
category: 
tags: estruturas-c
finished: false
date: "2017-08-21 13:50"
---



**Conteúdo**
- Do not remove this line (it will not be displayed)
{:toc}
  
# Revisão

## Organização de memória

(imagem:[geeksforgeeks.org](http://www.geeksforgeeks.org/memory-layout-of-c-program/))
    
![memory-layout](../assets/memory-layout.gif)
    
  
  
## Pilha de chamadas
  + Região de memória utilizada para alocação de variáveis locais e passagem de parâmetros para funções
  
  + Alocação e desalocação de memória é feita automaticamente quando entrando/saindo do escopo de declaração das variáveis.
    
  + Alocar implica em inserir elementos no topo da pilha (reservar espaço no topo da pilha)
    
  + Desalocar implica em remover elementos do topo da pilha
    
## Memória dinâmica:
  
  + Região de memória utilizada para alocação de variáveis não presas a um escopo.
    
  + Alocação e desalocação precisam ser requisitadas explicitamente pelo programador
    
  + Alocar implica em procurar na memória uma região livre do tamanho requisitado.
    
  + Desalocar implica em liberar região de memória previamente requisitada
	

## Questão de revisão

  - Àqueles que já fizeram esta disciplina:
  
    + A pilha de chamadas é implementada como uma estrutura de dados pilha
    
    + Como o Heap é implementado?
    
    + Obs: existe uma estrutura de dados chamada Heap, porém isso é uma coincidência. 
    


# Gerenciamento de memória em C 

Em C, memória no Heap é gerenciada pelas funções ([manpage:malloc](http://man7.org/linux/man-pages/man3/malloc.3.html))

```cpp
#include <stdlib.h>
void* malloc(size_t size);
void  free(void *ptr);
void* calloc(size_t nmemb, size_t size);
void* realloc(void *ptr, size_t size);
```
  
## Vazamentos de memória

Memória alocada dinâmicamente precisa ser liberada pelo programador. Analise o seguinte código:
```cpp
float media_idade(){
    float soma = 0;
    for (int i = 0; i < NUM_PESSOAS; i++){
        Pessoa* p = nova_pessoa();
        ler_pessoa(p);
        soma += p->idade;
    }
    return soma/NUM_PESSOAS;
}
int main() {
    printf("%f\n", media_idade());
}
``` 

Como a memória alocada pela função `nova_pessoa` não foi liberada, nem ponteiros para essas memórias mantidos, após o fim da função, não haverá como liberar essa memória.

  - [Vazamento de memória (wikipedia)](https://pt.wikipedia.org/wiki/Vazamento_de_mem%C3%B3ria)
  
  - [*Memory leak* (wikipedia)](https://en.wikipedia.org/wiki/Memory_leak)
  

  
## Exemplo: malloc
```cpp
// Utilizando malloc
int main() {    
    char* ptr;
    for (int i = 0; i < 10; i++)
        ptr = malloc(sizeof(char) * 1000);  
    free(ptr);    
    return 0;
}
```

**Valgrind nos responde** - [Valgrind (wikipedia)](https://pt.wikipedia.org/wiki/Valgrind)
```
==14406== HEAP SUMMARY:
==14406==     in use at exit: 9,000 bytes in 9 blocks
==14406==   total heap usage: 10 allocs, 1 frees, 10,000 bytes allocated
==14406== 
==14406== LEAK SUMMARY:
==14406==    definitely lost: 9,000 bytes in 9 blocks
==14406==    indirectly lost: 0 bytes in 0 blocks
==14406==      possibly lost: 0 bytes in 0 blocks
==14406==    still reachable: 0 bytes in 0 blocks
==14406==         suppressed: 0 bytes in 0 blocks
```

## Exemplo: realloc
```cpp
// Utilizando realloc
int main() {
    char* ptr;    
    for (int i = 0; i < 10; i++)
        ptr = realloc(ptr, sizeof(char) * 1000);
    free(ptr);    
    return 0;
}
```

**Valgrind nos responde**

```
==14322== HEAP SUMMARY:
==14322==     in use at exit: 0 bytes in 0 blocks
==14322==   total heap usage: 10 allocs, 10 frees, 10,000 bytes allocated
==14322== 
==14322== All heap blocks were freed -- no leaks are possible
```


## Exemplo: mantendo referências

Para que seja possível desalocar as memórias alocadas, é preciso manter um  ponteiro para cada uma delas.
```cpp
// Utilizando malloc
int main() {    
    char* ptr[10];
    for (int i = 0; i < 10; i++)
        ptr[i] = malloc(sizeof(char) * 10 * (i + 1));  
    free(ptr);    
    return 0;
}
```

**Erro de compilação**

A ideia deste código está correta porém a implementação está errada e nos leva a um erro de compilação, pois `ptr` não está alocada no heap.
```
In function ‘main’:
:11:5: warning: attempt to free a non-heap object ‘ptr’ [-Wfree-nonheap-object] free(ptr);    
```

## Exercício: liberando memória

Como alterar o código acima para que toda memória seja desalocada?



