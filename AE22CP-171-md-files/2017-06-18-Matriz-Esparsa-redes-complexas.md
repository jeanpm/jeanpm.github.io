---
layout: post
title: Redes complexas e matrizes esparsas
description:  .
author: Jean P. Martins
category: 
tags: matriz-esparsa
finished: false
---


# Conteúdo
* Do not remove this line (it will not be displayed)
{:toc}


# Sobre a prova

- Falar sobre a quantidade de aulas que faltam até a prova

- Pilhas utilizando códigos de listas subjacente
	- push
	- pop
	- top

- Hash tables
	- inserir sem repetição: retornar 1 sucesso, -1 falha
	- procurar por chave: retornar o item com a chave, ou -1
	
- Questões teóricas conceituais
	- Qual estrutura de dados usar? Por que?
	- Eficiência: memória e tempo



# Motivação para Matrizes esparsas

*keywords*: network science, complex networks

2m00s
{% include youtubePlayer.html id="V4f_1_r80RY" %}

1m15s
{% include youtubePlayer.html id="4fHufyIWmX0" %}

1m40s
{% include youtubePlayer.html id="sI8TK2mETrk" %}

4m50s
{% include youtubePlayer.html id="xZ3OmlbtaMU" %}


# Facebook: 6 passos de separação

[Facebook: 6 passos de separação](https://research.fb.com/three-and-a-half-degrees-of-separation/)

[Six_degrees_of_separation](https://en.wikipedia.org/wiki/Six_degrees_of_separation)

>“I read somewhere that everybody on this planet is separated by only six other people. Six degrees of separation. Between us and everybody else on this planet. The president of the United States. A gondolier in Venice. Fill in the names. . . . How every person is a new door, opening up into other worlds. Six degrees of separation between me and everyone else on this planet. But to find the right six people . . .” – John Guare, Six Degrees of Separation (1990)

> In honor of Friends Day, we’ve crunched the Facebook friend graph and determined that the number is 3.57. Each person in the world (**at least among the 1.59 billion people active on Facebook**) is connected to every other person by an average of three and a half other people.


# Introdução da ideia: pageRank



- Como ordenar os resultados da busca de acordo com a relevância
	- Como definir relevância?
	
- Descrever a ideia com uma rede simples
	- Utilizar a matriz completa
	
- Discutir sobre problemas de escalabilidade
	- Memória utilizada vs Número de elemntos na matriz
	
```cpp
	long terabyte = 1099511627776;
	long npages = terabyte/sizeof(float);
	printf("Número de floats em 1Tbyte (n)     = %ld\n", npages);
	printf("Tamanho da matriz (n x n) =%.0lf x %.0lf\n", sqrt(npages), sqrt(npages));
	
	
	float* t = (float*) malloc(sizeof(float) * terabyte);
	if (!t)
		printf("Erro de alocação\n");

```



# Como armazenar uma rede?
- Como armazenar informações sobre uma rede?
	- Matriz completa?
	- lista de de elementos
	- Vetor de listas
	- Tabelas Hash
	
- Vantagens e desvantagens
	- Matriz completa: acesso direto, inviável grandes redes, estática?
	- Listas de elementos: menos memória, acesso lento
	- Vetor de listas: menos memória, velocidade média de acesso, estática?
	- Hash table: menos memória, acesso direto em tempo razoável, não se beneficia de padrões de acesso
	
	


