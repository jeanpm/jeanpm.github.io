---
layout: post
title: Exercícios III - Regras de dedução
description: 
author: jean
category: 
tags: dedução-natural
finished: false
date: "2017-08-24 10:20"
---

# Demonstre os argumentos a seguir:

Utilize as regras de derivação:

*Introdução da conjunção:* | $\dfrac{\phi\quad\psi}{\phi \land \psi} \land\mbox{i}$
*Eliminação da conjunção:* | $\dfrac{\phi \land \psi}{\phi} \land\mbox{e}_1,\quad \dfrac{\phi \land \psi}{\psi} \land\mbox{e}_2$ 
*Introdução da dupla negação:* | $\dfrac{\phi}{\neg\neg\phi} \neg\neg\mbox{i}$ 
*Eliminação da dupla negação:* | $\dfrac{\neg\neg\phi}{\phi} \neg\neg\mbox{e}$ 
*Modus Ponens:* | $\dfrac{\phi\to\psi\qquad \phi}{\psi}{MP}$ 
*Introdução da disjunção:* | $\dfrac{\phi}{\phi \lor \psi}\lor\mbox{i}$
*Modus Tollens:* | $\dfrac{\phi\to\psi\qquad \neg\psi}{\neg\phi}{MT}$ 
*Eliminação da disjunção:* | $\dfrac{\phi \lor \psi\quad (\phi\dots\chi)\quad (\psi\dots\chi)}{\chi} \lor\mbox{e}$
*Introdução da contradição:* | $$\dfrac{\phi\quad \neg\phi}{\perp}\perp\mbox{i}$$
*Introdução da negação:* | $$\dfrac{(\phi\dots\perp)}{\neg \phi}\neg\mbox{i}$$
*Eliminação da contradição:* | $$\dfrac{\perp}{\phi}\perp\mbox{e}$$ 



$$(p\lor (q\to p)) \land q \vdash p$$

$$p\lor (p\land q)\vdash p$$

$$(p\land q) \lor (p\land r) \vdash p\land(q\lor r)$$

$$p \vdash q \to (p \land q)$$

$$p \vdash (p\to q) \to q$$

$$(p\to r) \land (q \to r) \vdash (p\land q )\to r$$

$$q \to r \vdash (p\to q) \to (p\to r)$$

$$p \to (q \to r), p\to q \vdash p\to r$$

$$p \to q, r \to s \vdash (p\lor r) \to (q \lor s)$$

$$p \lor q \vdash r \to ((p\lor q)\land r)$$

$$p \to q, r \to s \vdash (p \land r) \to (q \land s)$$

$$p \to (q\land r) \vdash (p\to q) \land (p\to r)$$

$$p \lor (p\land q) \vdash p$$

$$r, p \to (r\to q) \vdash p \to (q \land r)$$

$$p \to (q \lor r), q \to s, r \to s \vdash p \to s$$


$$\neg(p \land q) \vdash (\neg p \lor \neg q) \tag{Lei de De Morgan (DM)}$$

$$\neg(p \lor q) \vdash (\neg p \land \neg q) \tag{Lei de De Morgan (DM)}$$

$$(p \land (q \lor r )) \vdash ((p \land q) \lor (p \land r)) \tag{Distribuição (DIST)}$$

$$\neg p \to \neg q \vdash q \to p$$

$$\neg p \lor \neg q \vdash \neg(p \land q)$$

$$p \lor q, \neg q \lor r \vdash p \lor r$$

$$\neg p \land \neg q \vdash \neg (p\lor q)$$

$$p \to q, s \to t \vdash (p\lor s) \to (q \land t)$$

$$\neg p \vdash p \to q$$

$$\neg(p\to q) \vdash q \to p$$

$$(p\to q)\to r, s \to \neg p, t, \neg s \land t\to q \vdash r$$

$$(s\to p)\lor(t\to q) \vdash (s\to q) \lor (t\to p)$$

$$(p\land q) \to r, r \to s, q \land \neg s \vdash \neg p$$

$$p \to q \vdash \neg p \lor q$$

$$(c \land n) \to t, h \land \neg s, h \land \neg(s \lor c) \to p \vdash (n \land \neg t) \to p$$


