---
layout: post
title: Semântica da lógica proposicional I - Tabelas Verdade
description: 
author: jean
category: 
tags: semântica
finished: false
date: "2017-08-30 10:20"
---

**Conteúdo**
- Do not remove
{:toc}

# Semântica da Lógica proposicional

Até então tratamos da lógica proposicional do ponto de vista sintático. Ou seja, as regras de inferência utilizadas são baseadas principalmente na forma dos argumentos. Já a *semântica* de uma expressão é o seu significado. Por meio da caracterização do significado dos operadores lógicos, desenvolvemos uma visão menos restrita e mais formal sobre os argumentos.

## Princípio da bivalência

O princípio da bivalência ou lei do terceiro excluído (LTE), simplesmente formaliza a noção intuitiva que existem apenas duas opções de valores para uma fórmula qualquer

$$\vdash \phi \lor \neg \phi \tag{LTE}$$

## Tabelas verdade dos conectivos

Dada a LTE, a semântica de um conectivo lógico consiste na definição de todos seus possíveis valores lógicos, sendo que cada símbolo atômico e cada fórmula e subfórmulas podem ter, em um dado momento, apenas um valor dentre: verdadeiro (T) e falso (F).

A seguir, descreveremos as tabelas verdade para cada um dos conectivos lógicos vistos até então.

### Negação ($\neg$)

A negação é o único conectivo lógico unário visto até então. Dada uma fórmula qualquer $\phi$, esta pode assumir valor-verdade *verdadeiro* (V) ou *falso* (F), o que está descrito na primeira coluna da tabela abaixo. Já a negação $\neg\phi$, por sua vez assume valor-verdade que depende do valor de $\phi$, fato descrito na segunda coluna da tabela.

$\phi$ | $\neg\phi$
:-: | :-: 
V | F
F | V

### Conjunção ($\land$)

A conjunção é um operador binário, em que dadas duas fórmulas $\phi$ e $\psi$, assume valor-verdade *verdadeiro* apenas quando ambas conjuctos forem também verdadeiros. 

$\phi$ | $\psi$ | $\phi\land\psi$
:-: | :-: | :-:
V | V | V
V | F | F
F | V | F 
F | F | F

### Disjunção ($\lor$)

A disjunção é um operador binário. Dadas duas fórmulas $\phi$ e $\psi$, sua disjunção assume valor-verdade *verdadeiro* sempre que uma delas, ou ambas, forem verdadeiras.

$\phi$ | $\psi$ | $\phi\lor\psi$
:-: | :-: | :-:
V | V | V
V | F | V
F | V | V
F | F | F

### Condicional ($\to$)

O condicional é um operador binário que representa proposições do tipo "Se.. então...". Por exemplo

  - "Se Paula for, então Quincas irá." $(\phi\to\psi)$
  
Este argumento tem o mesmo significado a seguir

  - "Não é o caso de Paula ir e Quincas não ir." $\neg(\phi \land \neg \psi)$

Deste modo, dizemos que as fórmulas acima são equivalentes

$$(\phi\to\psi)\dashv\vdash\neg(\phi\land\neg\psi)$$

Dada esta equivalência, a tabela-verdade de ambas fórmulas são iguais, assim como demonstrado nas duas últimas colunas da tabela abaixo.

$\phi$ | $\psi$ | $\phi\to\psi$ | $\neg(\phi\land\neg\psi)$
:-: | :-: | :-: | :-: 
V | V | V | V
V | F | F | F
F | V | V | V
F | F | V | V

Como podemos ver pela tabela verdade, o condicional somente é falso quando seu antecedente é falso e seu consequente verdadeiro.


### Bicondicional ($\leftrightarrow$)

O bicondicional é um operador binário derivado do condicional simples e pode ser escrito como $\phi\leftrightarrow\psi$, fórmula a qual é equivalente a $(\phi\to\psi)\land(\psi\to\phi)$. Portanto, temos que 

$$\phi\leftrightarrow\psi \dashv\vdash (\phi\to\psi)\land(\psi\to\phi)$$

Esse tipo de equivalência é útil para que possamos esclarecer dúvidas no preenchimento da tabela verdade, pois assim é possível comparar nossa interpretação em ambas fórmulas.

$\phi$ | $\psi$ | $\phi\leftrightarrow\psi$
:-: | :-: | :-: 
V | V | V 
V | F | F 
F | V | F 
F | F | V

Pela tabela verdade acima, percebemos que o bicondicional $\phi\leftrightarrow\psi$ é verdadeiro sempre que ambas partes constituintes forem iguais (V,V) ou (F,F).

## Tabelas verdade de fórmulas 

Para construirmos a tabela verdade de uma fórmula complexa, devemos inicialmente decompô-la em subfórmulas. Para exemplificar esse procedimento, utilizaremos a fórmula já vista anteriormente: $\neg(\phi\land\neg\psi)$.

Observe, inicialmente, que essa é uma fórmula da forma $\neg(\chi)$, sendo $\chi: \phi\land\neg\psi$. Isto significa que $\chi$ é uma subfórmula. Por sua vez, para sabermos os valores-verdade da subfórmula $\chi$, é preciso conhecermos primeiro os valores-verdade dos conjuctos $\phi$ e $\neg\psi$, os quais são subfórmulas de $\chi$.

Para organizarmos essa ideia em forma de tabela, procederemos das menores subfórmulas às maiores, da esquerda para a direita, sendo uma coluna para cada. Inserimos primeiro as duas menores subfórmulas, que de fato são os símbolos atômicos, neste caso $\phi$ e $\psi$

$\phi$ | $\psi$ | $\neg\psi$ | $\phi \land \neg\psi$ | $\neg(\phi\land\neg\psi)$
 :-: | :-: | :-: | :-: | :-: 
V | V |  | | 
V | F |  | |
F | V |  | |
F | F |  | |

A próxima subfórmula a ser inserida seria então a negação $\neg\psi$.

$\phi$ | $\psi$ | $\neg\psi$ | $\phi \land \neg\psi$ | $\neg(\phi\land\neg\psi)$
 :-: | :-: | :-: | :-: | :-: 
V | V | F | | 
V | F | V | |
F | V | F | |
F | F | V | |

Considerando os valores-verdade da primeira ($\phi$) e terceira ($\neg\psi$) colunas, podemos então deduzir a quarta coluna como sendo a sua conjunção.

$\phi$ | $\psi$ | $\neg\psi$ | $\phi \land \neg\psi$ | $\neg(\phi\land\neg\psi)$
 :-: | :-: | :-: | :-: | :-: 
V | V | F | F | 
V | F | V | V |
F | V | F | F |
F | F | V | F |

Como a última (mais externa) subfórmula é apenas a negação da conjunção anterior, basta invertermos os valores-verdade da coluna ($\phi\land\neg\psi$).

$\phi$ | $\psi$ | $\neg\psi$ | $\phi \land \neg\psi$ | $\neg(\phi\land\neg\psi)$
 :-: | :-: | :-: | :-: | :-: 
V | V | F | F | V
V | F | V | V | F
F | V | F | F | V
F | F | V | F | V

### Tamanho da tabela verdade

Observe que nos exemplos acima, grande parte das tabelas verdade possuem o mesmo número de linhas. Esse valor é completamente definido pelo número de simbolos atômicos utilizados pelas fórmulas. Visto que para cada símbolo dois valores-verdade são possíveis, o número de linhas da tabela-verdade será $2^n$, onde $n$ é o número de símbolos utilizados. Como exemplo, considere a fórmula

$$p\land q \to w\land s$$

A qual utiliza 4 símbolos: $p, q, w$ e $s$. Para cada um desses há 2 possibilidades, portanto, o número de linhas na tabela será.

$$
\begin{array}{cccccccc}
p & \land & q & \to   & w & \land & s &\\
2 &\times & 2 &\times & 2 &\times & 2 & = 2^4 = 16
\end{array}
$$

### Exemplos ($XOR$)

Construa a tabela verdade para a seguinte fórmulas

$$(p\lor q) \land \neg(p \land q) \tag{XOR}$$

$p$ | $q$ | $p\lor q$ | $p\land q$ |$\neg(p\land q)$ | $(p\lor q) \land \neg(p \land q)$
 :-: | :-: | :-: | :-: | :-: | :-: 
V | V | V | V | F | F
V | F | V | F | V | V
F | V | V | F | V | V
F | F | F | F | V | F

### Exemplos (LTE)

Construindo a tabela-verdade para a LTE, observamos um fato curioso. Todas as linhas da última coluna da tabela possuem valor-verdade *verdadeiro*.

$$p \lor \neg p$$

$p$ | $\neg p$ | $p\lor \neg p$
 :-: | :-: | :-:
V | F | V
V | F | V
F | V | V
F | V | V


Fórmulas desse tipo recebem o nome de *tautologias* e são verdadeiras para qualquer atribuição de valores para os símbolos atômicos. Uma fórmula é uma tautologia se, e somente se, ela é um teorema, ou seja, provável sem suposições. 

  - Toda *tautologia* é **satisfazível**, ou seja, existe ao menos uma atribuição de valores-verdade que torna a fórmula verdadeira.

### Exemplos (Contradição)

Já a tabela-verdade para a contradição nos dá um resultado oposto ao das *tautologias*. Neste caso, todas as linhas da última coluna da tabela-verdade possuem valor-verdade falso. Isso significa que não há atribuição de valores-verdade para as variáveis que torne a fórmula verdadeira. 

  - Toda *contradição* é **insatisfatível**, ou seja, não existe atribuição de valores-verdade que torne a fórmula verdadeira.

$$p \land \neg p$$

$p$ | $\neg p$ | $p\land \neg p$
 :-: | :-: | :-:
V | F | F
V | F | F
F | V | F
F | V | F


## Tabelas verdade de formas de argumento

Tabelas verdade também podem ser utilizadas para demonstrar se uma forma de argumento é **válida** ou **inválida**. 

  - Uma forma de argumento é **válida** se não há atribuição de valores-verdade tal que as premissas sejam verdadeiras e a conclusão seja falsa.
  
  - Uma forma de argumento é **inválida** se existe ao menos uma atribuição de valores-verdade que torne as premissas verdadeiras e a conclusão falsa.
  
Como as tabelas verdade listam exaustivamente todas as possíveis atribuições de valores-verdade, elas podem ser utilizadas para verificar a validade de qualquer forma de argumento.

Como exemplo, vamos construir a tabela verdade para a forma de argumento:

$$p \lor q, \neg p \vdash q$$

A tabela verdade neste caso ignorará os símbolos: $, \vdash$. Tais símbolos são utilizados apenas para identificar possíveis colunas na tabela.

$p$ | $q$ | $p\lor q$ | $\neg p$ | $q$
 :-: | :-: | :-: | :-: | :-:
V | V | V | F | V
V | F | V | F | F
F | V | **V** | **V** | **V**
F | F | F | V | F

  - Observe que a única linha da tabela em que as premissas são ambas verdadeiras é a linha 3. Nessa situação a conclusão também é verdadeira, portanto a fórmula é **válida**. 

  - Como há dois casos em que a conclusão é verdadeira (linhas 1 e 3) então a fórmula é **satisfazível**.

### Exemplos (Afirmação do consequente)

Construa a tabela verdade para a forma de argumento a seguir:

$$p\to q, q \vdash p$$

$p$ | $q$ | $p\to q$ | $q$ | $p$
 :-: | :-: | :-: | :-: | :-:
V | V | V | V | V
V | F | F | F | V
F | V | **V** | **V** | **F**
F | F | V | F | F

Como a terceira linha nos provê um **contra-exemplo** do argumento, ou seja, uma atribuição de valores-verdade que torna as premissas verdadeiras e a conclusão falsa, então essa forma de argumento é **inválida**.

## Exercícios

Construa as tabelas verdade e verifique se as formas de argumento a seguir são **válidas** ou **inválidas**:

$$p\to q, p\to \neg q \vdash \neg p$$

$$p\to q \vdash \neg(q\to p)$$

$$p \lor q, q \lor r \vdash p \lor r$$


# Referências

  - [Logica - John Nolt (PDF). Capítulo 4: Pgs. 160 a 184](https://racionalistasusp.files.wordpress.com/2010/01/nolt-john-rohatyn-dennis-lc3b3gica.pdf)
