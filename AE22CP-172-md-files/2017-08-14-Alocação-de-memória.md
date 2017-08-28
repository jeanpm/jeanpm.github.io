---
layout: post
title: Organização de memória, stack, heap I
description: 
author: jean
category: 
tags: estruturas-c
finished: false
date: "2017-08-14 13:50"
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
  
## Revisão
  - Structs, vetores, entrada de dados
  
  - funções que recebem vetores como parâmetros,
  
  - Tamanho do vetor predefinido
  
  - O que fazer se o tamanho do vetor vier da entrada
  
    - Seu valor somente será conhecido em *tempo de execução*!
    
    - Será preciso *alocação dinâmica* de memória.
    
    - Em alguns compiladores é possível fazer *alocação estática*
```cpp
scanf("%d", &tamanho);
int vetor[tamanho];
```

  - Assunto da aula: Entender o porque dessa limitação.
  
    - call stack
    - heap
  

# Organização de memória



## Memória local

Memória local (variáveis locais) é um tipo de memória usada por todos, mas poucos pensam sobre ela.

A principal característica de memória local é que ela é alocada e desalocada automaticamente assim que entramos e saímos de um determinado escopo. Por essa mesma razão, essas variáveis são as vezes referidas como *automáticas*

Uma variável local tem tempo de vida igual ao tempo de vida da função na qual ela foi definida.

```cpp
int sqrt(int num) {
	int result;
	result = result * result;
	return result;
}
```

No exemplo acima, a declaração `int result` refere a um espaço de memória de tamanho igual a `sizeof(int)`. Esse espaço de memória pode ser utilizado durante a vida da função para atribuição, acesso do valor que armazenado.

A linha `return result` retorna uma cópia do valor em `result`.

Após o fim da função (após o `return`) qualquer acesso à região indicada por `result` é um acesso inválido, visto que aquela região de memória deixa de ser um espaço controlado pelo programador.

  - Resumo: uma variável local tem tempo de vida igual ao tempo de vida da função que a criou.
  - Está sempre associada ao escopo de uma função: main, ou outra qualquer.
  
## Call stack

Imagem extraída da wikipedia [call stack](https://en.wikipedia.org/wiki/Call_stack)
![callstack]({{site.url}}/assets/call-stack.png)

## Demonstração usando gdb

As funções abaixo, quando chamadas a partir da `main` irão disparar a criação de `stack frames` similares. Portanto, o valor da primeira variável (após a chamada de `soma`), irá conter valores remanescentes de chamadas anteriores.

  - Isso demonstra que a criação dos `stack frames` reutiliza a mesma memória várias vezes,
  
  - Também demonstra que a memória alocada por uma função, é liberada após seu fim.

```cpp
int soma(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int sub(int a, int b) {
    int subtracao = a - b;
    return subtracao;
}

int print(char a, char b) {
    char c = 'a';
    return c;
}

int main() {
    int r = soma(5, 3);
    r = sub(5, 5);
    r = print('a', 'b');
}
```

## Eficiência/Deficiência parâmetros locais

Sempre que um argumento é passado a uma função, ele é recebido como uma cópia

  - Argumentos de tipos de dados simples, como `int`, são eficientemente passados desta forma.

  - Argumentos mais complexos, no entanto, causam um *overhead* de cópia:
  
    - int read(Pessoa p);
    
    - Numa função deste tipo, todos os valores em p seriam copiados para a pilha de execução
    
    - Como `p` é uma cópia dos dados lidos na função `main`, alterar esse vetor no contexto da função `read` não altera o conteúdo do vetor original.
    
  - O mesmo não ocorre para vetores:
  
    + Vetores são sempre ponteiros: `int p[]`, `int* p`
    
    + O que é copiado, nestes casos, é ponteiro `sizeof(int*)`
    
### Exemplo de alteração de variáveis locais 

  - Utilizar este exemplo após descrever a organização de memória.

Tentar implementar a função `read_file` para efetuar o `scanf` e atribuir valores ao vetor de pessoas.

  - Este exemplo funciona, pois o vetor é um ponteiro

```cpp
void read_file(Pessoa p[]) {
	for (int i = 0; i < NUM_PESSOAS; i++)
		scanf("%s%d%ld", p[i].nome, &p[i].idade, &p[i].cpf);
}
```
Este exemplo não funciona, pois `struct`s são passadas por valores

```cpp
void read_file(Pessoa p[]) {
	for (int i = 0; i < NUM_PESSOAS; i++)
		read_pessoa(p[i]);
}
```

# Ponteiros

Por que usar ponteiros?

  - Evitar repasse de estruturas por valor, cópia pode ser cara.

## O que é um ponteiro?

Uma variável simples, ex.: `int` e `float` é um bloco na memória que armazena uma informação

  - int num : 42 : .endereço
  
  - espaço de armazenamento: sizeof(int)
  
Um ponteiro, por outro lado, ex.: `int*` e `float` é um bloco na memória que armazena um endereço

  - int* ptrNum : .endereço : .ptrEndereço
  
  - ptrNum contém o endereço de um espaço de memória para um inteiro. 
  
  - Portanto, `sizeof(int*)` = `sizeof(float*)` = `sizeof(struct Pessoa*)`
  
  | int num | 42 | .endereço |
  | int* ptrNum | .endereço | .ptrEndereço |
  
  - Mostra código que imprime o sizeof de vários tipos e ponteiros
  
    - Ilustrar que ponteiros tem sempre o mesmo tamanho
    
```cpp
#include <stdio.h>

int main() {
    printf("sizeof int = %ldbytes\n", sizeof(int));
    printf("sizeof long = %ldbytes\n", sizeof(long));
    printf("sizeof float = %ldbytes\n", sizeof(float));
    printf("sizeof char = %ldbytes\n", sizeof(char));
    printf("sizeof double = %ldbytes\n", sizeof(double));

    printf("\n");

    printf("sizeof int* = %ldbytes\n", sizeof(int*));
    printf("sizeof long* = %ldbytes\n", sizeof(long*));
    printf("sizeof float* = %ldbytes\n", sizeof(float*));
    printf("sizeof char* = %ldbytes\n", sizeof(char*));
    printf("sizeof double* = %ldbytes\n", sizeof(double*));
}
/*
sizeof int = 4bytes
sizeof long = 8bytes
sizeof float = 4bytes
sizeof char = 1bytes
sizeof double = 8bytes

sizeof int* = 8bytes
sizeof long* = 8bytes
sizeof float* = 8bytes
sizeof char* = 8bytes
sizeof double* = 8bytes
*/
```
    
## Dereferenciando um ponteiros

Um ponteiro é uma referência a um valor armazenado em outra posição de memória.

  - Como seguir o ponteiro e acessar o valor armazenado?
  
  - Essa operação se chama dereferenciação:
  
    + `int* p = &c;`
    
    + `*p = 10;` Operação válida, atribui 10 em `c`
    
    + `p = 10;` faz `p` armazenar o endereço de memória `10` 
    
    + `p[0] == c` mesmo se `p` não for um vetor
    
```cpp
#include<stdlib.h>
#include <stdio.h>

int main() {
    int c = 10;
    int* ptr = &c;
    vetor[0] = -198;
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
	
	
