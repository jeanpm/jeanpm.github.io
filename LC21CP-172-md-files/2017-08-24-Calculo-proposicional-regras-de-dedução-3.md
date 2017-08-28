---
layout: post
title: Cálculo Proposicional - Regras de dedução III
description: 
author: jean
category: 
tags: dedução-natural
finished: false
date: "2017-08-24 10:20"
---

**Conteúdo**
- Do not remove this line (it will not be displayed)
{:toc}

# Revisão

*Introdução da conjunção:* | $\dfrac{\phi\quad\psi}{\phi \land \psi} \land\mbox{i}$
*Eliminação da conjunção:* | $\dfrac{\phi \land \psi}{\phi} \land\mbox{e}_1,\quad \dfrac{\phi \land \psi}{\psi} \land\mbox{e}_2$ 
*Introdução da dupla negação:* | $\dfrac{\phi}{\neg\neg\phi} \neg\neg\mbox{i}$ 
*Eliminação da dupla negação:* | $\dfrac{\neg\neg\phi}{\phi} \neg\neg\mbox{e}$ 
*Modus Ponens:* | $\dfrac{\phi\to\psi\qquad \phi}{\psi}{MP}$ 
*Introdução da disjunção:* | $\dfrac{\phi}{\phi \lor \psi}\lor\mbox{i}$
*Modus Tollens:* | $\dfrac{\phi\to\psi\qquad \neg\psi}{\neg\psi}{MT}$ 
*Introdução do condicional:* | $\dfrac{(\phi\dots\psi)}{\phi\to\psi} \to\mbox{i}$
*Eliminação da disjunção:* | $\dfrac{\phi \lor \psi\quad (\phi\dots\chi)\quad (\psi\dots\chi)}{\chi} \lor\mbox{e}$

# Regras de inferência

## Regras para a negação

As regras para a negação são utilizadas em provas por *contradição* (reductio ad absurdum). Uma contradição tem sempre a forma

$$\phi \land \neg\phi$$


**Eliminação da negação**

Desse tipo de proposição é possível eliminar a negação, substituindo a por um símbolo apropriado que indique que uma contradição existe. 

$$\dfrac{\phi\quad \neg\phi}{\perp}\neg\mbox{e}$$

**Introdução da negação**

A introdução da negação também é uma regra hipotética. Dada uma fórmula $\phi$, o primeiro passo da regra consiste em assumir $\phi$ como hipótese. Se em qualquer momento da derivação, essa hipótese nos levar a uma contradição ($\phi\dots\perp$) podemos concluir que a hipótese é falsa. Como só há duas opções, se a hipótese é falsa, sua negação será verdadeira.

$$\dfrac{(\phi\dots\perp)}{\neg \phi}\neg\mbox{i}$$

Note que a contradição, não necessariamente, precisa ocorrer entre $\phi \land \neg \phi$, pode ocorrer para outra fórmula qualquer e sua respectiva negação. 

**Eliminação da contradição**
Uma característica contraintuitiva de qualquer contradição, é que elas nos permite concluir qualquer fórmula. Essa regra pode ser descrita da seguinte forma

$$\dfrac{\perp}{\phi}\perp\mbox{e}$$ 


## Prova por contradição

Utilizando as regras da negação e contradição um tipo de regra pode ser derivada e utilizada para demonstrar a validade de argumentos. Esta regra é chamada *prova por contradição* ou *redução ao absurdo* (RAA) e consiste em assumir como hipótese a negação da conclusão de um argumento, caso uma contradição seja derivada a partir daí, podemos então concluir que a hipótese é falsa, e portanto, a conclusão é verdadeira.

$$\dfrac{(\neg\phi\dots\perp)}{\phi}RAA$$

Como exemplo, vamos demonstrar a validade da regra de eliminação da contradição: $p, \neg p\vdash q$:

$$
\begin{array}{llr}
1.  & p           & \mbox{(premissa)}\\
2.  & \neg p      & \mbox{(premissa)}\\\hline
3.0. & \neg q     & \mbox{hipótese (RAA)}\\
3.2. & \perp      & \land\mbox{i em 1 e 2}\\\hline
4.  & \neg\neg q  & \mbox{por RAA 3.0-3.1}\\
5.  & q           & \neg\neg\mbox{e}
\end{array}
$$

## Exercícios: prova por contradição (Nolt,pg.122)

Como exemplo dessa regra, vamos demonstrar a regra Modus Tollens por introdução da negação.

$$p \to q, \neg q \vdash \neg p$$

$$
\begin{array}{llr}
1.   & p\to q & \mbox{(premissa)}\\
2.   & \neg q & \mbox{(premissa)}\\\hline
3.0.  & p      & \mbox{hipótese (RAA)}\\
3.1.  & q      & MP\mbox{ em 1 e 3}\\
3.2.  & \perp & \neg\mbox{e em 2 e 3.1.}\\\hline
4.   & \neg p  & \neg\mbox{i em 3.0-3.2}
\end{array}
$$

Observe que a hipótese $p$ (a qual é a negação da conclusão) nos permitiu concluir $q$. No entanto, temos $\neg q$ como premissa o que nos leva a uma contradição ($q \land \neg q$). Essa contradição nos informa que a hipótese ($p$) só pode ser falsa, e portanto sua negação deve ser verdadeira ($\neg p$).


$$p \to q, p \to \neg q \vdash \neg p$$

$$p\to (q\to r), p, \neg r \vdash \neg q$$

$$\neg(\neg p \land \neg q), \neg p \vdash q$$

$$p \lor q, \neg p \vdash q$$


# Teoremas

Algumas fórmulas são prováveis sem quaisquer suposições não hipotéticas, essas são chamadas **teoremas**. Um teorema é representado da seguinte forma:

$$\vdash \neg(p \land \neg p)$$

$$\vdash p \to (p \lor q)$$

$$\vdash p \to ((p\to q)\to q)$$


# Equivalências

Dadas duas fórmulas $\phi$ e $\psi$, elas são ditas **equivalentes** se elas são interderiváveis, ou seja:

$$ \phi \vdash \psi$$

$$ \psi \vdash \phi$$ 

Este fato é definido como $\phi \dashv\vdash \psi$

**Demonstre as equivalências a seguir**

$$ (p \to q) \dashv\vdash \neg(p \land \neg q)$$

$$\neg(p \land q) \dashv\vdash (\neg p \lor \neg q) \tag{Lei de De Morgan (DM)}$$ 

$$\neg(p \lor q) \dashv\vdash (\neg p \land \neg q) \tag{Lei de De Morgan (DM)}$$

$$(p\lor q) \dashv\vdash (q\lor p) \tag{Comutação (COM)}$$

$$(p \land q) \dashv\vdash (q\land p) \tag{Comutação (COM)}$$

$$(p \lor (q \lor r)) \dashv\vdash ((p\lor q)\lor r) \tag{Associação (ASSOC)}$$

$$(p \land (q \land r))\dashv\vdash((p\land q)\land r) \tag{Associação (ASSOC)}$$

$$(p \land (q \lor r )) \dashv\vdash ((p \land q) \lor (p \land r)) \tag{Distribuição (DIST)}$$



# Material adicional

[Logica - John Nolt (PDF). Pg. 122](https://racionalistasusp.files.wordpress.com/2010/01/nolt-john-rohatyn-dennis-lc3b3gica.pdf)

[Logic in Computer Science - Huth & Ryan (PDF). Pg. 20](ftp://ftp.cs.bham.ac.uk/pub/authors/M.D.Ryan/tmp/Anongporn/Ch1+3.pdf)
{% include youtubePlayer.html id="sVUMAqMmy7o" %}
{% include youtubePlayer.html id="ec8oLHZFhpo" %}
