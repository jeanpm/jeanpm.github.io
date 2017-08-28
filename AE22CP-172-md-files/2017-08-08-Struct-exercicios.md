---
layout: post
title: Exercícios I (Structs)
description: 
author: jean
category: 
tags: estruturas-c
finished: false
date: "2017-08-08 13:50"
---

# Exercícios

## Preparação
  
  1. Definir as constantes: MAX_NOME_SIZE, NUM_PESSOAS  
```cpp
#define MAX_NOME_SIZE 20
#define NUM_PESSOAS 5163
```

  2. Definir o tipo de dado Pessoa  
```cpp
typedef struct {
	int idade;
	long cpf;
	char nome[MAX_NOME_SIZE];
}
```
  
  3. Declarar um vetor de Pessoas na função main  
```cpp
int main(){
	Pessoa lista[NUM_PESSOAS];  		
	... // completar durante a resolução dos exercícios.
}
```
  
  
  4. Implementar a leitura dos dados do arquivo (cada linha uma posição do vetor) 
  
  5. Implementar uma função que compute a média de idade das pessoas
  
  6. Implementar uma função que compute o desvio padrão das idades
  
  7. Implementar uma função que imprima todos as pessoas do vetor
  
  8. Implementar uma função que imprima o nome de todas as pessoas de uma certa idade    
    - A idade deve ser recebida como parâmetro da     
```cpp
void print_por_idade(Pessoas p[], int idade);
```
    
  9. Implementar uma função que retorne a Pessoa de maior idade.  	
```cpp
Pessoa mais_velho(Pessoas p[]);
```  
  10. Implementar uma função que imprima todas as pessoas de idade par.

  11. Implementar uma função que verifique se existe pessoas com CPF repetido
```cpp
// retorna 1 caso exista,
// retorna 0 caso não exista 
int existe_cpf_repetido(Pessoas p[]);
```
        

  12. Implementar uma função que receba um vetor de inteiros, de tamanho 100 (freq) e o vetor de pessoas.
```cpp
void contar_por_idade(Pessoa p[], int freq[]);
```  
   Esta função deve armazenar no vetor de inteiros o número de pessoas que possuem a mesma idade.
```cpp
freq[0]; // número de pessoas de idade 0
freq[60]; // número de pessoas de idade 60
```
   Imprimir o vetor freq e redirecionar saída para um arquivo freq.txt
```cpp
./contar > freq.txt
```
      


  13. Utilizar os dados do arquivo freq.txt para gerar um gráfico de barras: utilizer o excel, libreoffice-calc, R, python, etc.. ou qualquer programa de sua escolha
  
  

