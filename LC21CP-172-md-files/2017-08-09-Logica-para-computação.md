---
layout: post
title: Lógica para Computação
description: 
author: jean
category: 
tags: introdução
finished: false
date: "2017-08-09 10:20"
---
  
- [Plano de aulas - PDF](../assets/LC21CP-172-plano.pdf)


**Conteúdo**
- Do not remove this line (it will not be displayed)
{:toc}

# Motivação 

  - {% include youtubePlayer.html id="ozMbmBp3onE" %} 

  - {% include youtubePlayer.html id="_huhIGhD5YM" %} 

  - O objetivo da lógica em computação é desenvolver linguagens para modelar situações, de modo que possamos analisá-las formalmente.
  
  - Analisar situações significa construir argumentos sobre tais situações
  
  - Analisá-las formalmente, significa que tais argumentos devem ser não-ambíguos e possíveis de implementação no computador.
  
  
  - E geral, *Lógica* trata da formalização de linguagens e raciocínio
  
    + Na *computação* a formalização é seguida da automatização por meio software.
    
    
  - LC21CP é o primeiro contato que o alunos tem com *linguagens formais*
  
    + Linguagens de programação são linguagens formais
  	
    + A teoria da computação está fundamentada matematicamente sobre *linguagens formais*


## Inferência sobre o mundo

  - A existência de um sistema formal que define as leis que regem determinado conceito, nos permite inferir/concluir sobre o sistema
    
    + Formalização das leis da mecânica de Newton => Conclusões sobre o sistema solar
    
    + Formalização de leis sobre comportamento humano (amigos) => Prever o comportamento em certas situações
    
    + Formalização sobre o comportamento dos filhos => Pais conseguem inferir problemas
    
  - Forma geral:
  	
    + Argumentos
  	
    + Relações (premissas  e conclusão)
  	
    + Conclusões

## Exemplo de formalização lógica: Aritmética

  - A aritmética consiste da formalização dos mecanismos de contagem
  
  - A partir da formalização a contagem pode ser feita de forma simbólica, sem exigir "contagem"
  
  - Formalização da soma:
  
    + 5 + 5 = IIIII IIIII
    
    + 3 x 5 = IIIII IIIII IIIII
    
    + 13 x 13 = ? 
    
    + Com números grandes fica mais evidente que a multiplicação é feita sem pensarmos em contagem
    
  - A formalização da aritmética, permitiu o desenvolvimento de algoritmos para 
  
    + *multiplicação*, 
    
    + *divisão*, etc.
    
  - Esses algoritmos porém não nos lembram imediatamente do processo de contagem que originou a aritmética.

## Analogia da Aritmética e modelos de software

  - Se aritmética (formalização) permitiu a abstração e desenvolvimento de ferramentas simbólicas para conclusão
  
  - A mesma ideia é observada em programação de computadores


    
	
