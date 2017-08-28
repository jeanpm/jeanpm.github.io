---
layout: post
title: Cálculo Proposicional - Regras de dedução II
description: 
author: jean
category: 
tags: dedução-natural
finished: false
date: "2017-08-23 10:20"
---

**Conteúdo**
- Do not remove this line (it will not be displayed)
{:toc}

# Revisão

*Introdução da conjunção:* | $\dfrac{\phi\quad\psi}{\phi \land \psi} \land\mbox{i}$
*Eliminação da conjunção:* | $\dfrac{\phi \land \psi}{\phi} \land\mbox{e}_1,\quad \dfrac{\phi \land \psi}{\psi} \land\mbox{e}_2$ 
*Introdução da dupla negação:* | $\dfrac{\phi}{\neg\neg\phi} \neg\neg\mbox{i}$ 
*Eliminação da dupla negação:* | $\dfrac{\neg\neg\phi}{\phi} \neg\neg\mbox{e}$ 
*Modus Ponens:* | $\dfrac{\phi\to\psi\qquad \phi}{\psi}MP$ 
*Introdução da disjunção:* | $\dfrac{\phi}{\phi \lor \psi}\lor\mbox{i}$

# Regras de inferência

## Regra para eliminação do condicional - Modus Tollens

Existe uma segunda regra para eliminação do condicional, chamada *Modus Tollens* (MT). Em *Modus Ponens* (MP) concluimos que, dada fórmula $$\phi\to\psi$$, $$\psi$$ só é verdadeira quando \(\phi\) é verdadeira. 

*Modus Ponens* trata do caso oposto, em que $\neg q$ é tido como premissa, portanto:

$$p\to q, \neg q \vdash \neg p$$

Esta regra é provada por contradição. Assuma que $p$ seja verdadeiro. Logo

$$p, p\to q \vdash q\quad (MP)$$

No entanto, temos como premissa $\neg q$, portanto, $p$ não pode ser verdadeiro.   

  $$\dfrac{\phi\to\psi\quad \neg\psi}{\neg\phi}MT\qquad(\mbox{Modus Tollens})$$ 

  
**Modus Ponens**: exemplo
  - "Se Jean é paranaense, então Jean é brasileiro." ($$p\to q$$)  
  - $$p$$ : "Jean é paranaense." ($$p$$)  
  - $$q$$ : "Jean é brasileiro" (então $$q$$)
  
**Modus Tollens**: exemplo

  - "Se Jean é paranaense, então Jean é brasileiro." $(p\to q)$ 
  - $$\neg q$$ : "Jean não é brasileiro"  
  - $$\neg p$$ : "Jean não é paranaense."
  
### Exercícios: Modus Tollens

$$p\to(q\to r), p, \neg r \vdash \neg q$$

# Regras hipotéticas

## Regra para a inclusão do condicional (prova do condicional)

Dadas duas fórmulas $\phi$ e $\psi$, o condicional pode ser incluído entre elas se, quando assumindo a **hipótese** de $\phi$ verdadeiro, então $\psi$ puder ser concluído por derivação. Deste modo, se existe uma derivação da hipótese à conclusão $(\phi\dots\psi)$, a implicação pode ser concluída.

$$\dfrac{(\phi\dots\psi)}{\phi\to\psi}\to\mbox{i}$$ 


### Exercícios: inclusão do condicional 

Exemplo de resolução:

$$p\to q \vdash \neg q \to \neg p$$

$$
\begin{align}
1.\quad & p\to q & \mbox{(premissa)}\\
2.\quad & \neg q & \mbox{(hipótese)}\\
2.1\quad & \neg p & \mbox{por MT em 1. e 2.}\\
3.\quad & \neg q \to \neg p & \mbox{por } \to\mbox{i}\mbox{ em 2. e 2.1}
\end{align}
$$

Se ao assumirmos $\neg q$ como hipótese, $\neg p$ pode ser concluído por dedução/derivação, então como conclusão $\neg q \to \neg p$.

$$(p \land q) \to r \vdash p \to (q \to r)$$

$$p \to (q \to r) \vdash (p \land q) \to r$$

$$p \to q \vdash (p \land r) \to (q \land r)$$

## Regras para eliminação da disjunção

Dada uma fórmula $\phi \lor \psi$, a disjunção pode ser eliminada, se em assumindo-se cada uma delas como hipótese, a mesma conclusão $\chi$ possa ser derivada. Isso pode ser descrito de duas formas. 

**Não-hipotética**

Na primeira (não hipotética), as implicações $\phi\to\chi$ e $\psi\to\chi$ aparecem como premissas, e portanto

$$\phi \lor \psi, \phi\to \chi, \psi\to\chi \vdash \chi$$

**Hipotética**

Já a segunda regra é hipotética. Visto que uma, ou ambas, as implicações não aparecem como premissas, elas precisam ser demonstradas por dedução, assumindo cada parte ($\phi$ e $\psi$) como hipótese. Neste caso, só é possível derivar $\chi$ se e somente se ambas hipóteses levarem a $\chi$, o que é representado como ($\phi\dots\chi$ e $\psi\dots\chi$). Esta regra é representada da seguinte forma:   

$$\phi \lor \psi, (\phi\dots\chi), (\psi\dots\chi) \vdash \chi$$

Note que $(\phi\dots\chi)$ e $(\psi\dots \chi)$ são demonstradas por inclusão do condicional.

$$\dfrac{\phi\lor\psi\quad(\phi\dots\chi)\quad(\psi\dots\chi)}{\chi}\lor\mbox{e}\qquad(\mbox{eliminação do }\lor)$$  

### Exercícios: eliminação da disjunção e inclusão do condicional

$$p \lor q, p \to r, q \to r \vdash r$$

$$(p \lor q) \land (p \lor r), p \to s, q \to s, p \to t, r \to t \vdash s \land t$$

$$p \lor p, p \to (q \land r) \vdash r$$

$$q \to r \vdash (p \lor q) \to (p \lor r)$$

$$(p \lor q) \lor r \vdash p \lor (q \lor r)$$

$$p \land (q \lor r) \vdash (p \land q) \lor (p \land r)$$

$$(p \land q) \lor (p \land r) \vdash p \land (q \lor r)$$

