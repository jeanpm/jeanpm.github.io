---
layout: post
title: Exercícios II - Regras de dedução
description: 
author: jean
category: 
tags: dedução-natural
finished: false
date: "2017-08-17 12:00"
---


# Demonstre os argumentos a seguir:

Utilize as regras de derivação:
  
*Introdução da conjunção:* | $\dfrac{\phi\quad\psi}{\phi \land \psi} \land\mbox{i}$
*Eliminação da conjunção:* | $\dfrac{\phi \land \psi}{\phi} \land\mbox{e}_1,\quad \dfrac{\phi \land \psi}{\psi} \land\mbox{e}_2$ 
*Introdução da dupla negação:* | $\dfrac{\phi}{\neg\neg\phi} \neg\neg\mbox{i}$ 
*Eliminação da dupla negação:* | $\dfrac{\neg\neg\phi}{\phi} \neg\neg\mbox{e}$ 
*Modus Ponens:* | $\dfrac{\phi\to\psi\qquad \phi}{\psi}{MP}$ 
*Introdução da disjunção:* | $\dfrac{\phi}{\phi \lor \psi}\lor\mbox{i}$


$$(p \land q), r \vdash q \land r$$

$$(p \land q) \land r, s \land t \vdash q \land s$$ 

$$p, \neg\neg(q \land r) \vdash \neg\neg p \land r$$

$$p \land q \vdash q \land p$$

$$(p\land q) \land r \vdash p\land (q\land r)$$

$$p\to (p\to q), p \vdash q$$

$$q\to(p\to r), \neg r, q \vdash \neg p$$

$$\neg p\land q, (\neg p \land q)\to (r\lor \neg p) \vdash r \lor \neg p$$

$$p\to(q\land r), p \vdash p \land q$$

$$p \land q \vdash q \land p$$

$$(p \land q) \to (r \land s), \neg\neg p, q \vdash s$$

$$p \to (q \land r), p \vdash q \land r$$

$$p \vdash (p\lor q) \land (p\lor r)$$

$$p, \neg\neg(p\to q) \vdash q\lor \neg q$$

$$p, \neg\neg(p\to q) \vdash (r \land s) \lor q$$

$$(p\land q)\land r, s \land t \vdash q \land s$$

