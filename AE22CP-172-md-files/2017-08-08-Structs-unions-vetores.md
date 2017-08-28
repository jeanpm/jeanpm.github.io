---
layout: post
title: Structs, unions, vetores, strings II
description: 
author: jean
category: 
tags: estruturas-c
finished: false
date: "2017-08-07 18:40"
---


**Conteúdo**
- Do not remove this line (it will not be displayed)
{:toc}

## Revisão da aula anterior
  - Material sobre linguagem C ([IME-USP](https://www.ime.usp.br/~slago/slago-C.pdf))
  
  - LEIA LIVROS SOBRE PROGRAMAÇÃO!
  
  - Argumentos de entrada: `argc` e `argv[]`
  - Redirecionamento de entrada à `scanf`
  - Transformando strings: `atoi`, `atol`, `atof`:
  - Revisar a idéia de organização de memória: `struct` vs `vetor`

# Structs

Uma `struct` pode ser heterogênea e conter diversos tipos de dados ao mesmo tempo:

  - Usar o fato do char nome não estar no fim, para ilustrar a estrutura de memória da structs
   
```cpp
#define MAX_STR 100
struct Pessoa {
	// Tamanho variável deve ficar no fim da struct.
	char nome[MAX_STR]; 
	long cpf;
	int  idade;
};
```

## Definindo tipos com `typedef`

  - Implementar exemplos simples

```cpp
typedef int Inteiro;
typedef char* String;
```

  - Retornar ao exemplo de pessoas

```cpp
#define MAX_STR 100
typedef struct {
	char nome[MAX_STR]; // Tamanho variável deve ficar no fim da struct.
	long cpf;
	int  idade;
} Pessoa;
```


## Exercícios durante a aula
### 1. Manipulação de structs e funções

  1. Criar um vetor de structs Pessoa: `struct Pessoa p[100]`
  2. Ler informações das pessoas de um arquivo, por meio de `scanf` e redirecionamento
  3. Implementar uma função que imprima todos os nomes das pessoas em `p`
  4. Implementar uma função que imprima todas as idades das pessoas em `p`
  5. Implementar uma função que retorne a média de idade das pessoas em `p`
  6. Implementar uma função que retorne o *desvio padrão* da idades das pessoas em `p`

Ler as informações iterativamente por scanf e armazenar em cada struct. 

Implementar uma função que receba o vetor de structs e retorne a média de idade.

```cpp
float media_idade(struct Pessoa p[] );
float desvio_padrao_idade(struct Pessoa p[]);
void print_idades(struct Pessoa p[]);
void print_nomes(struct Pessoa p[]);
```



## Plano de aulas
  - Resumo do conteúdo [PDF](../assets/AE22CP-172-plano.pdf)
    - Relacionar às estruturas de dados em [C++ STL](http://www.cplusplus.com/reference/stl/)
    - Utilizar os mesmos nomes de estruturas que em STL
      + Facilitará o aprendizado introdutório das estruturas C++ 
	
  - APS e provas (datas)
    - [Hackerrannk: AE22CP-17/2](https://www.hackerrank.com/ae22cp-17-2)
	
	
