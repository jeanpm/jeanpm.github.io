---
layout: post
title: Organização de memória, stack, heap III
description: 
author: jean
category: 
tags: estruturas-c
finished: false
date: "2017-08-15 13:50"
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
  
# Revisão

  - Compreensão de termos: *Declaração vs. Definição*
    
    - Declare uma variável de nome `aluno` do tipo `Pessoa`
    
    - Declare uma variável de nome `ra` do tipo `long`
    
    - Defina uma `struct` de nome `Fracao`, contendo campos `numerador` e `denominador`.
    
    - Defina uma função de nome `multiplicar` que receba duas `struct` do tipo `Fracao`. 
    
    - Chame a função `multiplicar` passando duas `struct Fracao` como parâmetro.
    
  
  - Referências vs ponteiros
  
    - Referência é o termo genérico, independente de linguagem
    
    - Ponteiro é usualmente utilizado no contexto de C/C++  
  
  
  - Pilha de chamadas 
  
	- Recebe por valor
	
		```cpp
		// Não altera o conteúdo da variável passada como argumento
		void inicializa_pessoa(Pessoa p) {
			p.idade = 0;
			p.cpf = 0;		
		}
		```
	
	- Recebe por referência
	
		```cpp
		// Altera o conteúdo da variável externa
		void inicializa_pessoa(Pessoa* p) {
			p->dade = 0;
			p->cpf = 0;		
		}
		```		
	- Passagem por valor
		```cpp
		int main() {
			Pessoa w;
			inicializa_pessoa(w);
		}
		```
		
	- Passagem por referência
		```cpp
		int main() {
			Pessoa w;
			inicializa_pessoa(&w);
		}
		```
		
  - Ponteiros
	
	- Qual o conteúdo da variável?
	
		```cpp
		int main() {
			int c = 10;
			int* d = &c;	
			*d = 20;		
			printf("%d", c);
		}
		```
		
	- Qual o conteúdo da variável?
	
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

    - Qual o conteúdo da variável?
	
		```cpp
		int main() {
			int c = 10;
			int* d = &c;	
			scanf("%d", d);
		}
		```
		
	- Qual o conteúdo da variável?
	
		```cpp
		int main() {
			int c = 10;
			int* d = &c;	
			d[0] = 20;		
			printf("%d", c);
		}
		```
		
# Memória dinâmica (Heap memory)

Memória alocada na pilha de chamadas é automática,

  - O compilador reserva memória quando necessário 
  
  - A memória é liberada ao sairmos do escopo.
  
  
Memória dinâmica é diferente

  - O programador requisita alocação
  
  - O programador precisa liberar a memória quando não mais útil.
  
  
Benefícios da memória dinâmica

  - a memória pode ser alocada por qualquer função e retornada para uso posterior
  
  - O programador tem controle de quando àquela memória deixará ser sua responsabilidade
  

Pontos negativos

  - Memória dinâmica é manipulada através de ponteiros
  
    + o ponteiro em si é armazenado na pilha de chamadas, já a memória alocada está no heap
  
  - Aumenta-se a responsabilidade do programador quanto à memória alocada/desalocada
  
## Memória local e dinâmica

Como a memória no heap é sempre acessada por meio de ponteiros e esses ponteiros são armazenados na pilha de chamadas, estas duas formas de memória trabalham juntas. (Figura extraída de [cslibrary-stanford-pg.25](http://cslibrary.stanford.edu/102/PointersAndMemory.pdf))

![Ponteiros para o heap são armazenados na call stack]({{site.url}}/assets/local-heap.png)

## Estrutura do heap

O Heap é um grande bloco de memória gerenciado por algum mecanismo. Esse mecanismo é responsável por armazenar informações sobre quais partes desse bloco estão em uso e quais estão disponíveis.

Assuma o exemplo da figura anterior, 
  - Existe um ponteiro `int* Gif2` por meio do qual a memória `GIF2` é manipulada. 

  - Caso a memória `GIF2` não seja mais necessária, ela pode ser desalocada, deixando espaço útil no Heap

  ![Fragmentação memória]({{site.url}}/assets/local-heap-frag.png)  
  
  - A partir desse momento, uma nova requisição de memória pode utilizar a região desalocada novamente
  
  - É responsabilidade do gerenciador de memória manter os espaços disponíveis e tentar evitar que a memória fique fragmentada demais.
  
  - É responsabilidade do programador avisar ao gerenciador de memória quando um espaço de memória previamente alocado se torna disponível.
  
  - O gerenciador só é capaz (em C) de manter organizada a memória disponível se o programador se compromete a avisá-lo.
  
    + Algumas linguagens possuem mecanismos para monitorar memórias não utilizadas e liberá-las automaticamente, estes mecanismos se chamam *garbage collector* (coletor de lixo).
    
    + Monitorar, no entanto, é dispendioso e linguagens de mais baixo nível não implementam tais mecanismos 
  
  
## Gerenciador de memória em C 

Em C, memória no Heap é gerenciada pelas funções ([manpage:malloc](http://man7.org/linux/man-pages/man3/malloc.3.html))

```cpp
#include <stdlib.h>
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *reallocarray(void *ptr, size_t nmemb, size_t size);
```

## Exemplos de uso: malloc e free

Qualquer tipo de variável pode ser alocada no heap. Embora nem sempre seja uma boa opção, veja os exemplos:

  - Alocação de memória para um inteiro
  ```cpp 
  int* c = malloc( sizeof(int) );
  *c = 15;
  c[0] = 20;  
  ```   

  - Observe que um inteiro armazenado no heap utiliza a mesma notação que o um vetor.
  ```cpp 
  // int c[10];
  int* c = malloc( sizeof(int) * 10 );
  *c = 15;
  c[0] = 20;  
  ``` 
  
## Ponteiros para vetores

Desta forma, apesar da sintaxe, um vetor é sempre um ponteiro para sua posição inicial. Isto é verdade para vetores de qualquer tipo, strings inclusas `char*`;

  ```cpp
  #define STR_SIZE 10
  // alocação na pilha de chamadas
  char nome[STR_SIZE]; 
  // alocação no heap
  char* nome = malloc( sizeof(char) * STR_SIZE);
  ``` 
  
  - Em ambos os casos, a dereferenciação do ponteiro permite acesso ao primeiro elemento do vetor:
  
    + `*nome`

## Eficiência de alocação: stack vs heap

A pilha de chamadas é uma estrutura mais simples, memória é sempre alocada em uma direção e desalocada em outra, na mesma ordem. Portanto,

  - Alocação de memória na call stack é rápida.
  
  
O heap, é uma estrutura mais complexa, e memória pode ser alocada não sequencialmente, o que torna a procurar por memória disponível mais honerosa, mais demorada.



## Exercício

Alterar o código da aula anterior para que a memória da estrutura `Pessoa` seja alocada no heap.

```cpp
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE_NOME 20
typedef struct {
	int idade;
	long cpf;
	char nome[MAX_SIZE_NOME];
} Pessoa;

// Passagem de referência usando ponteiros `Pessoa* p`
void ler_pessoa(Pessoa* p) {
	scanf("%s%d%ld", p->nome, &(p->idade), &(p->cpf));
}

int main() {
	Pessoa w;	
	ler_pessoa(&w);
}
```
  
  
  

