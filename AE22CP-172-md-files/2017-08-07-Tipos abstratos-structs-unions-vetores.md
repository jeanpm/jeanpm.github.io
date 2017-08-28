---
layout: post
title: Structs, unions, vetores, strings I
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


# Ambiente de programação
  - Linux vs Windows: o que utilizar?
  - Instalar ferramentas de programação GNU (cygwin no windows)
  - Configurar para uso via linha de comando

# Entrada de dados
## Utilizando argumentos de entrada
  - O que são os parâmetros `argc` e `argv`

```cpp
int main() {
	return 0;
}

int main(int argc, char* argv[]) {
	return 0;
}
```

## Exercícios
### 1. Utilizando argc e argv: (Mostrar como exemplo)
  - Implementar um código que imprima o conteúdo das variáveis `argc` e `argv[0]`.
  
```cpp
int main(int argc, char* argv[]) {
	printf("argc = %d\n", argc);
	printf("argv[0] = %s\n", argv[0]);
	return 0;
}
```

### 2. Acessando os elementos em argv: echo
  - Implementar um código que imprima todos os elementos do vetor `argv`

### 3. Transformando strings: atoi, atol, atof:
  - Implemente um código que receba como parâmetros um `int`, um `long` e um `float` nessa ordem.

### 4. Utilizando a entrada
  - Implemente um código que receba um inteiro $$i > 0$$ e imprima todos valores de $$0\dots i$$.


## Utilizando a entrada padrão
  - scanf: int, float, char, char-, double, long
  
## Exercícios
### 1. Utilizando `scanf`
  - Leia e imprima, iterativamente, cinco inteiros

```cpp
int main() {
	int valor;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &valor); // Explicar o &valor
		printf("%d ", valor);
	}
}
```

### 2. Utilizando scanf e redirecionamento da entrada 
  - Leia um inteiro com scanf o qual indicará o tamanho de sequência de strings
  - Iterativamente, leia e imprima a string lida.
  - O que acontece se a sequência for muito grande? **Tedioso**.
  - Utilizar redirecionamento de entrada e arquivos
  
```cpp
#define STR_MAX 100
int main() {
	int nelementos;
	scanf("%d", &nelementos);

	char valor[STR_MAX]; // Definir as constantes
	for (int i = 0; i < nelementos; i++) {
		scanf("%s", valor);
		printf("%s ", valor);
	}
}

./main < entrada.txt
./main < entrada.txt > saida.txt
```

# Structs
Uma `struct` é uma construção da linguagem C/C++ que nos permite agrupar informações, i.e. nos permite criar um tipo de dados complexo. 

Por exemplo, assuma que precisemos manipular frações. Uma fração pode ser representada por dois valores inteiros, no entanto, não existe um tipo de dados específico para isso, podemos criar.

```cpp
struct Fracao {
	int numerador;
	int denominador;
};
```


Uma `struct` também pode conter outras `structs` 

```cpp
struct parOrdenado {
	struct Fracao p1;
	struct Fracao p2;
};
```

Uma `struct` pode ser heterogênea e conter diversos tipos de dados ao mesmo tempo:
```cpp
#define MAX_STR 100
struct Pessoa {
	char nome[MAX_STR];
	long cpf;
	int  idade;
};
```

## Exercícios
### 1. Implementar um vetor de 5 structs Pessoa
Ler as informações iterativamente por scanf e armazenar em cada struct. 

Implementar uma função que receba o vetor de structs e retorne a média de idade.

```cpp
float media(struct Pessoa[]);
```

Imprimir a média de idade dos elementos do vetor.
 
 
### 2. Implementar uma função que implemente a multiplicacao de duas estruturas `Fracao`

Chamar a função da main e imprimir o resultado.

```cpp
struct Fracao multiplicacao(struct Fracao a, struct Fracao b) {
	Fracao c;
	c.numerador = a.numerador * b.numerador;
	c.denominador = a.denominador * b.denominador;
	return c; // !!!Retornando uma variável local!!!
}
```

```cpp
void multiplicacao(struct Fracao a, struct Fracao b, struct Fracao* c) {
	c->numerador = a.numerador * b.numerador;
	c->denominador = a.denominador * b.denominador;
}
```


## Plano de aulas
  - Resumo do conteúdo [PDF](../assets/AE22CP-172-plano.pdf)
    - Relacionar às estruturas de dados em [C++ STL](http://www.cplusplus.com/reference/stl/)
    - Utilizar os mesmos nomes de estruturas que em STL
      + Facilitará o aprendizado introdutório das estruturas C++ 
	
  - APS e provas (datas)
    - [Hackerrannk: AE22CP-17/2](https://www.hackerrank.com/ae22cp-17-2)
	
	
