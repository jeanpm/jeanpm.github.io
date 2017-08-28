---
layout: post
title: Formalização de argumentos lógicos
description: 
author: jean
category: 
tags: argumentos-formais
finished: false
date: "2017-08-16 10:20"
---

# Conteúdo
- Do not remove this line (it will not be displayed)
{:toc}


# Lógica Simbólica

A *lógica informal*, como vista até então, é o estudo de argumentos particulares em linguagem natural. Enquanto a lógica formal, por sua vez, realça generalidade e teoria, a lógica informal se concentra numa análise prática de argumentos. 

A *lógica formal* é o estudo das formas de argumento

  - Modelos abstratos comuns a muitos argumentos distintos
  
## Disjunção

Considere os seguintes exemplos:

  - "Hoje é segunda-feira ou terça-feira. Hoje não é segunda-feira. Hoje é terça-feira"
  
  - "Rembrandt pintou a Mona Lisa ou Michelangelo a pintou. Não foi Rembrandt. Michelangelo a pintou."
  
  - "Ele é menor de 18 anos ou ele é jovem. Ele não é menor de 18 anos. Ele é jovem."
  
No que concerne a forma dos três argumentos acima, todos eles compartilham a mesma estrutura: 

  1. P ou Q	(*premissa*)
  
  2. Não P		(*premissa*)
  
  3. Então, Q 	(*conclusão*)

Segunda alternativa:  

  1. P ou Q	(*premissa*)
  
  2. Não Q		(*premissa*)
  
  3. Então, P 	(*conclusão*)
  
Esta regra é a forma de argumento conhecida como *silogismo disjuntivo* (disjunção). Cada um dos exemplos anteriores é chamado uma *instância* da forma.

## Conjunção

  - "Hoje é quarta-feira e há aula de lógica."
  
  - "Todo animal é mamífero e todo mamífero é humano."
  
A forma da conjunção nos diz que se a proposição acima é verdadeira então cada um dos conjuctos também é.

  1. P e Q  (*premissa*)
  2. Então, P (*conclusão*) 
 
Segunda alternativa: 
 
  1. P e Q  (*premissa*)
  2. Então, Q (*conclusão*) 
  
Se a premissa é falsa, a conclusão é falsa, mas não se sabe se ambos conjuctos são falsos ou apenas um deles.
  

## Condicionais

  - "Se terminar de estudar então irei à festa"
  
  - "Se T é um triângulo então T é um polígono"
  
A forma dos condicionais nos diz que o consequente somente será verdadeiro dada a verdade do antecedente

  1. Se P, então Q  (*premissa*)
  2. P,            (*premissa*)
  3. Então Q       (*conclusão*)
  
## Bicondicionais

  - "T é um triângulo se e somente se T é um polígono de três lados."
  
A forma dos bicondicionais consiste em dois condicionais:

  - "Se T é um triângulo então T é um polígono de três lados"
  
  - "Se T é um polígono de três lados então T é um triângulo"
  
Portanto, um bicondicional expressa uma ideia verdadeira se esses dois condicionais também sejam verdadeiros

  1. P, se e somente se Q  
  

## Operadores ou conectivos lógicos

Nesta etapa da disciplina estaremos preocupados apenas com formas contendo:

  - símbolos,
  
  - operadores lógicos.
    
    | $$\neg p$$ | negação | não | unário ||
    | $$p \land q$$ | conjunção | e | binário | $$p,q$$: conjuctos |
    | $$p \lor q$$ | disjunção | ou | binário | $$p,q$$: disjunctos |
    | $$p \to q$$ | condicional | se ... então| binário | $$p,q$$: antecedente,consequente |
    | $$p \leftrightarrow q$$ | bicondicional | se e somente se ...| binário | |
    

Reescrevendo-se a forma da disjunção por meio de operadores/conectivos lógicos, temos:
    
  1. $$p \lor q $$	(*premissa*)
  
  2. $$\neg p$$		(*premissa*)
  
  3. $$q$$ 	(*conclusão*)
  
  
## Sintaxe compacta

Uma forma mais comum de se escrever um argumento simbólico, utiliza o símbolo $$\vdash$$ para indicar que uma fórmula pode ser obtida (deduzida) utilizando como premissa outras fórmulas.

  - Para o caso da disjunção ilustrado acima, tem-se a seguinte sintaxe: 
    + $$p\lor q, \neg p \vdash q$$.
    + as premissas à esquerda de $$\vdash$$ são separadas por vírgulas.
    
