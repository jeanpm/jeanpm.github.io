---
layout: post
title: Organização de memória, stack, heap II
description: 
author: jean
category: 
tags: estruturas-c
finished: false
date: "2017-08-14 18:40"
---


# Conteúdo
- Do not remove this line (it will not be displayed)
{:toc}

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
  
## Revisão prática
  - Alterar o código da aula anterior para dinamicamente alocar o tamanho do vetor pessoas
  
    ```cpp
    // Versão atual
    Pessoa lista[NUM_PESSOAS];
    
    // Versão nova
    int num_pessoas;
    scanf("%d", &num_pessoas);
    
    Pessoa lista[num_pessoas];
    ```
 
  - Ex: Criar dois ponteiros para inteiro apontando para a mesma memória
  
    ```cpp
    int c = 10;
    int* ptr1 = &c;
    int* ptr2 = &c;
    ``` 
    
  - Ex: Criar uma função que receba uma `Pessoa` e atribua valores de uma linha do arquivo
  
    ```cpp
    void read_pessoa(Pessoa* p) {
    	scanf("%st%d%ld", p->nome, &(p->idade), &(p->cpf));
    }
    ``` 
  
  - Acessando ponteiros de `struct` com `->` vs `.`
    
    ```cpp
    Pessoa p;
    p.idade = 30;
    p.cpf = 8388383;
    
    Pessoa* ptr_p;
    p->idade = 30;
    p->cpf = 8383838;
    ```
  

# Ponteiros


## Dereferenciando um ponteiros

Um ponteiro é uma referência a um valor armazenado em outra posição de memória.

  - Como seguir o ponteiro e acessar o valor armazenado?
  
  - Essa operação se chama dereferenciação:
  
    + `int* p = &c;`
    
    + `*p = 10;` Operação válida, atribui 10 em `c` (dereferenciação de p)
    
    + `p = 10;` faz `p` armazenar o endereço de memória `10` (faz p armazenar o endereço 10)
    
    + `p[0] == c` mesmo se `p` não for um vetor (dereferenciação sintaxe de vetores)
    
```cpp
#include<stdlib.h>
#include <stdio.h>

int main() {
    int c = 10;
    int* ptr = &c;
//    ptr = 1999;
    *ptr = 18765;
    ptr[0] = 9876;

    return 0;

}
```

## O ponteiro NULL

A constante NULL é um ponteiro especial que codifica a ideia de que um ponteiro está apontando para o nada.

  - Em C, NULL é igual a zero, portanto pode ser utilizado como Boolean false.
  
  - Como zero é um endereço não acessível, dereferenciar NULL gera um erro

### Curiosidade: o que é *stack overflow*?


## Plano de aulas
  - Resumo do conteúdo [PDF](../assets/AE22CP-172-plano.pdf)
    - Relacionar às estruturas de dados em [C++ STL](http://www.cplusplus.com/reference/stl/)
    - Utilizar os mesmos nomes de estruturas que em STL
      + Facilitará o aprendizado introdutório das estruturas C++ 
	
  - APS e provas (datas)
    - [Hackerrannk: AE22CP-17/2](https://www.hackerrank.com/ae22cp-17-2)
	
	
