---
layout: post
title: Cálculo Proposicional - Regras de dedução I
description: 
author: jean
category: 
tags: dedução-natural
finished: false
date: "2017-08-17 10:20"
---

**Contato**
  - Jean Paulo Martins
  - Sala 105
  - e-mail jeanmartins@utfpr.edu.br


# Conteúdo
- Do not remove this line (it will not be displayed)
{:toc}


# Cálculo proposicional

O cálculo proposicional consiste de um sistema de *regras de inferência* que são capazes de gerar todas (e somente) as formas de argumentos válidas expressáveis na linguagem.

Como cada forma de argumento tem um infinito número de instâncias, cada vez que produzimos uma forma válida, nós estabelecemos a validade de um número imenso de argumentos específicos.

Os cálculos que executaremos com esses sistemas são sequências de inferências com o objetivo de demonstrar a validade de certas *formas de argumento*.

# Regras de inferência (dedução natural)

As regras de inferência geram as formas de argumento numa série de etapas simples e precisas de raciocínio, chamadas

  - *derivação ou prova*
  
A idéia geral é que a definição de um conjunto apropriado de regras nos permita criar um "cálculo de proposições", por meio do qual seja possível derivar novas conclusões a partir de verdades já verificadas (premissas). Ou derivar novas fórmulas a partir de outras fórmulas.

$$\phi_1,\phi_2,\phi_3,\dots,\phi_n \vdash \psi \mbox{ (Argumento)}$$

Do ponto de vista prático, uma *derivação* é uma etapa que transforma uma fórmula em outra, menor ou maior.

A quantidade de *regras de derivação*, no nosso caso, será definida a partir dos conectivos lógicos. Ou seja, para cada *conectivo lógico* definiremos duas regras básicas de inferência.

  - *inclusão*: inclui o operador numa expressão
  
  - *eliminação*: dadas premissas elimina o operador e uma expressão, substituindo-o por uma conclusão

Portanto, temos dez *regras de inferência* no total.

  - Assuma, deste ponto em diante, que $$\phi$$ e $$\psi$$ representam duas fórmulas na linguagem da lógica proposicional.
  
    - As regras definidas para cada conectivo apenas formalizam o funcionamento intuitivo desses operadores.

## Regras para a conjunção

**Introdução/Inclusão do conectivo:** 

Dadas duas premissas $$\phi$$ e $$\psi$$, podemos concluir que a sua conjunção também é verdadeira.
  
  $$\phi,\psi \vdash \phi \land \psi$$

Essa regra de derivação é chamada $$\land$$-introdução (abreviada por $$\land_i$$) e, em geral, é denotada por:
  
  $$\dfrac{\phi\quad\psi}{\phi \land \psi} \land\mbox{i}\quad(\land\mbox{-introdução})$$ 
  

**Eliminação/Exclusão do conectivo:**

Dada uma conjunção $$\phi \land \psi$$, podemos concluir que ambos conjuctos são verdadeiros.
  
  $$\phi \land \psi \vdash \phi \mbox{ (Opção 1)}$$
  
  $$\phi \land \psi \vdash \psi \mbox{ (Opção 2)}$$
  
Essa regra de derivação é chamada $$\land$$-eliminação (abreviada por $$\land_{e1}$$, $$\land_{e2}$$). Como existem duas possibilidades adicionaremos um subscrito para indicar a *opção1* ou *opção2*:
  
   $$\dfrac{\phi \land \psi}{\phi} \land\mbox{e}_1 \mbox{ (Opção 1)}$$ 
   
   $$\dfrac{\phi \land \psi}{\psi} \land\mbox{e}_2 \mbox{ (Opção 2)}$$ 
   


## Regras para a dupla negação

Uma fórmula é equivalente a sua *dupla negação*:

  - $$~\phi$$ : "Está chovendo"

  - $$~\neg\phi$$: "Não está chovendo"

  - $$\neg\neg\phi$$: "Não é verdade que não está chovendo"
  
Portanto, a dupla negação pode ser eliminada ou introduzida

$$\dfrac{\neg\neg\phi}{\phi} \neg\neg\mbox{e}$$ 

$$\dfrac{\phi}{\neg\neg\phi} \neg\neg\mbox{i}$$ 


## Exemplos: derivação da conjunção e dupla negação

$$(p \land q), r \vdash q \land r$$

$$(p \land q) \land r, s \land t \vdash q \land s$$ 

$$p, \neg\neg(q \land r) \vdash \neg\neg p \land r$$



## Regra para eliminar o condicional (Modus Ponens)

As regras de introdução e eliminação do condicional são bem diferentes, portanto, iremos separá-las em duas seções.

  - O condicional (implicação) é análogo à sentenças da forma se... então
  
  - Deste modo, dadas fórmulas $$\phi$$ e $$\psi$$, temos em $$\phi\to\psi$$, $$\psi$$ é verdadeira quando $$\phi$$ é verdadeira.
  
  - Em casos em que $$\phi\to\psi$$ e $$\phi$$ são premissas, podemos então concluir $$\psi$$. Essa é a regra de derivação de eliminação do condicional ($$\to$$-eliminação)
  
  $$\dfrac{\phi\to\psi, \phi}{\psi}\to\mbox{e}\qquad(\mbox{Modus Ponens})$$ 
  
*em latim significa "a maneira que afirma afirmando"*
  
  - "Se estiver chovendo, te encontrarei no cinema" ($$p\to q$$)
  
  - $$p$$ : "Está chovendo" ($$p$$)
  
  - $$q$$ : "Te encontrarei no cinema" (então $$q$$)
  

## Exemplos: derivação por exclusão do condicional

$$\neg p\land q, \neg p \land q\to r\lor \neg p \vdash r \lor \neg p$$

$$p\to(q\land r), p \vdash p \land q$$

$$p \land q \vdash q \land p$$

$$(p \land q) \to (r \land s), \neg\neg p, q \vdash s$$

$$p \to (q \land r), p \vdash q \land r$$



## Regras para introdução da disjunção

Dadas duas fórmulas $$\phi$$ e $$\psi$$, se uma delas é verdadeira, a conjunção das duas também será. Ou seja:

$$\phi \vdash \phi \lor \psi\quad(\forall \psi)$$

A introdução da disjunção será referenciada por $$\lor\mbox{i}$$.

$$\dfrac{\phi}{\phi \lor \psi}\lor\mbox{i}\qquad(\mbox{introdução do }\lor)$$  


## Exemplos: derivação por introdução do conjuntivo

$$p \vdash (p\lor q) \land (p\lor r)$$

$$p, \neg\neg(p\to q) \vdash q\lor \neg q$$

$$p, \neg\neg(p\to q) \vdash (r \land s) \lor q$$

  

# Validade de uma forma de argumento

  - Uma forma de argumento é *válida* se todas as suas *instâncias* são válidas.
  
  - Uma forma de argumento é *inválida* se alguma de suas instâncias é inválida.
  
  - Uma instância é válida se é impossível que sua conclusão seja falsa, dado que suas premissas são verdadeiras.
  
## Exemplo de forma de argumento válida
  
  *disjunção* ($$p\lor q, \neg p \vdash q$$)
  
  - Sempre que $$p\lor q$$ e $$\neg p$$ forem verdadeiras, $$q$$ será verdadeira, independentemente do significado representado por $$p$$ e $$q$$.
  
## Exemplo de forma de argumento inválida
  
  *afirmação do consequente* ($$p\to q, q \vdash p$$)
  
  Embora algumas instâncias desta forma sejam válidas, algumas não são. Portanto ela é uma forma inválida, veja os exemplos:

  - $$p:$$ Se você está dançando na lua, então você está vivo,
  
  - $$q:$$ Você está vivo,
  
  - Você está dançando na lua.
  
  Portanto, para demonstrar que uma forma é inválida, basta encontrar uma instância para a qual ela seja inválida.
  
  
## Automatização por manipulação simbólica

Assumindo-se formas de argumento válidas, é possível tirar conclusões sobre argumentos definidos abstratamente. Essa possibilidade nos permite também implementar métodos automáticos de inferência.



