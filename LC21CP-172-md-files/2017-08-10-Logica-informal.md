---
layout: post
title: Lógica Proposicional informal
description: 
author: jean
category: 
tags: logica-informal
finished: false
date: "2017-08-10 10:20"
---

# Conteúdo
- Do not remove this line (it will not be displayed)
{:toc}

# Revisão em vídeo
	
  - Vídeo Nerdologia sobre lógica, incompletude, Godel, Turing, Russel
  {% include youtubePlayer.html id="UI1xR_AECrU" %} 
  
# Lógica proposicional informal

  - A lógica é o estudo de argumentos. (Nolt, John)
  
  - Um argumento é uma sequência de enunciados na qual um dos enunciados é a conclusão e os demais são premissas.
  
    + "Todos os homens são mortais. Sócrates é homem. Portanto, Sócrates é mortal."
    
  - As premissas e as conclusões são sempre *proposições* (*enunciados*)
  
  - Identifique as premissas e a conclusão:
  
    + "Ele é leão, pois nasceu na primeira semana de agosto."
    
    + "Ele está respirando, portanto está vivo"
    
    + "Não irei dormir. O filme ainda não acabou"
    

## Proposições

  - A lógica proposicional recebe esse nome pois lida com *proposições* (sentenças declarativas).
  
  - Uma proposição é uma sentença que comunica um julgamento ou uma crença, uma suposição/afirmação
  
    + O trem está atrasado
  	
    + Há táxis na estação
  	
    + Está chovendo
  	
    + Choveu hoje
  	
    + Hoje é quinta-feira
    
    + A soma dos números 3 e 5 é igual a 8.
    
    + Todo número natural par > 2 é a soma de dois números primos 
      - (Conjectura de Goldbach, não se sabe se verdadeira ou falsa, mas obviamente é verdadeira ou falsa).
    
    + Todos os marcianos gostam de salame. 
  	
## Não-proposições

  - Nem todas as sentenças comunicam julgamentos, ou afirmam algo (não declarativas)
    
    + Qual o seu nome?
    
    + Feche a porta!
    
    + Que a força esteja com você!
    
## Como identificar sentenças declarativas

  - Uma sentença declarativa pode sempre ser rescrita da forma:
  
    + "É verdade que..."
    
    + Em outras palavras, uma sentença declarativa é sempre "verdadeira" ou "falsa"
    
    + Quando não se pode atribuir valor "verdadeiro" ou "falso" a uma sentença ela não é declarativa.
    

## Estruturas lógicas de uma frase

  - No estudo da lógica formal, não estamos interessados no significado das frases, mas apenas em suas estruturas lógicas:
  
    + "Se o trem tivesse chegado, e não houvesse táxis na estação, então João se atrasaria para seu compromisso."
    
    + "Se estivesse chovendo e Joana não estivesse com seu guarda-chuva, então ela se molharia"
    
    + As estruturas lógica desses dois argumentos são identicas:
    
      - Se p e não q, então r ($$p \land \neg q \rightarrow r$$)
  

  - Como reescrever uma sentença declarativa na linguagem da lógica proposicional?
  
    1. Definir as afirmações atômicas, ou seja, aquelas que não podem ser decompostas
    
    2. Definir as relações entre elas.
    
  - Considere que seja verdadeira a afirmação
  
    + Todo número par > 2 é a soma de dois números primos.
    
    + Se a é par, então existe b e c primos, tal que b + c = a
    
    + Primeiro passo, separar em frases atômicas:
    
      - $$p: $$ "a é número par"
      
      - $$q: $$ "existe b e c primos tal que a = b + c"
      
    + Segundo passo, declarar as relações entre $$p$$ e $$q$$ ($$p \rightarrow q$$)
 
    "O composto ouro-argônio não é produzido na natureza pois é de difícil reação com qualquer outra coisa e o outro também forma poucos compostos".   

## Argumentos complexos

  "Todos os números racionais podem ser experessos como $$\frac{a}{b}, a,b\in\mathbb{Z}$$. Contudo $$\pi$$ não pode ser expresso como $$\frac{a}{b}$$. Portanto, $$\pi$$ não é um número racional. Evidentemente, $$\pi$$ é um número, logo existe ao menos um número não racional."

  - Um argumento é dito complexo se ele é composto por conclusões intermediárias que posteriormente são utilizadas como premissas.
  
  - Uma *conclusão intermediária* também é chamada *premissa não-básica*.
 
  
## Exercícios: identifique premissas e conclusões

página 2, 8, 11, (John Nolt, Lógica)
  

# Avaliação de um argumento

  - Embora um argumento possa ter diversos objetivos, o seu principal propósito é demonstrar que uma conclusão é provável ou verdadeira.
  
  - Assim, há alguns argumentos que são melhores do que outros no cumprimento do mesmo papel.
  
  - Trataremos de quatro itens para avaliar um argumento:
  
    1. Se todas as premissas são verdadeiras,
    
    2. Se, dada a verdade das premissas, a conclusão é ao menos provável,
    
    3. Se as premissas são relevantes para a conclusão
    
    4. Se o argumento é indutivo, não havendo evidência substancial suposta. 
    

## Verdade das premissas

Se uma das premissas de um argumento for falsa, então não se pode estabelecer a veracidade de sua conclusão.

"Visto que todos os norte-americanos são, atualmente, individualistas, a história registrará, no final do século XX, que os Estados Unidos fracassaram como defensor da democracia"

  - p: "todos os norte-americanos são, atualmente, individualistas"
  - q: "os Estados Unidos fracassaram como defensor da democracia"
  
  - A premissa é falsa, portanto não se pode concluir $$q$$.
  
  - Isso, no entanto, não significa que $$q$$ seja falsa. Significa apenas que o argumento não nos permite conclui-la.

"Billy quebrou a vidraça, eu o vi fazer isso"

  - p: "Eu vi Billy quebrar a vidraça"
  - q: "Billy quebrou a vidraça".
  
  - A premissa pode ser falsa, portanto a conclusão deve esperar novas evidências para $$p$$.
  
  
Estes exemplos mostram a necessidade de critérios suplementares para se avaliar argumentos, critérios para avaliar o grau em que as premissas sustentam a conclusão.

## Validade e probabilidade indutiva

Os argumentos podem ser classificados em duas categorias:

  - Dedutivo: a conclusão deve ser verdadeira se suas premissas são verdadeiras,
   
    + "Nenhum mortal pode parar o tempo. Você é mortal. Você não pode parar o tempo"
  
  - Indutivo: a conclusão é provável dadas as premissas
  
    + "Frequentemente, quando chove fica nublado. Está chovendo. Está nublado."
    
## Relevância das premissas

Uma conclusão pode ser provável ainda que as premissas sejam irrelevantes para a conclusão.

  - "Eu detesto a ideia de um criador infinitamente poderoso. Deus não existe".



