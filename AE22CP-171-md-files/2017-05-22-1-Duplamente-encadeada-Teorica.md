---
layout: post
title: Listas duplamente encadeadas - Teórica
description: 
author: jean
category: 
tags: listas
finished: false
---

### Apresentação

- Jean Paulo Martins
- UFG
- USP
- Otimização, Metaheurísticas

- jeanmartins@utfpr.edu.br (sala 105)


## Visão geral do conteúdo

- Estruturas de dados
	+ Eficiência
	+ Flexibilidade
	+ Bibliotecas
	+ Qual utilizar?
	

## CARACTERÍSTICAS COMPARÁVEIS DE ED
	
De agora em diante será dado enfoque às características das estruturas de dados
relacionadas à eficiência. Assumo que até então a disciplina teve o objetivo de
compreender as estruturas, agora seria o momento de compreender as qualidades e 
defeitos de cada uma delas comparativamente.

- Entender os Prós e contras de cada uma delas
	+ Eficiência
	+ Gastos de memória
	

## MOTIVAÇÃO PARA NOVAS ESTRUTURAS DE DADOS


Deste modo, deve sempre haver um motivo para apresentar uma estrutura de dados 
mais complexa. Por exemplo, por que usar listas duplamente encadeadas sendo que 
as unicamente encadeadas desempenham o mesmo papel: 
	e.g., eficiência e praticidade de implementação com baixo custo 
	      adicional de memória.
	      

## CRIAÇÃO DE BIBLIOTECAS

É dado como item de conteúdo a criação de bibliotecas para estruturas de dados,
será adotada a estratégia de 

- Inserir este conteúdo ao longo do restante do curso sempre que viável for. 

Por exemplo, como seria uma lista genérica, como tornar 
um método de ordenação genérico (crescente ou decrescente) 	     


## Listas duplamente encadeadas



## POR QUE UTILIZÁ-LAS?


	- Eficiencia de acesso, inserção remoção.
	- Qualquer elemento da lista é alcançável a partir de qualquer outro
	- A remoção de um item independe de conhecer seu predecessor.
	 
	- Esta parte tem como objetivo evidenciar os pontos fracos das listas 
	  encadeadas, com o fim de sugerir a necessidade do duplo encadeamento, 
	  referência ao fim da lista, etc. 


## COMO MOSTRAR SUA UTILIDADE
	- Operações e suas complexidades, de forma informal 
	- Comparar vetor e lista unicamente encadeada
	- Mostrar as diferenças de complexidades
	- Questionar sobre as possíveis diferenças entre as listas simples e as 
	  listas duplamente encadeads. O que o duplo encadeamento ajuda?
	  

## ENTENDENDO A UTILIDADE DO DUPLO ENCADEAMENTO

- Inserção
	- Questionar qual o procedimento básicos de inserção
- Remoção
	- Questionar qual o procedimento básicos de remoção
- Acesso a dados
	- por ordem
	- por conteúdo, etc..
	
** Resposta proximo slide: percorrer a lista


COMPARAÇÃO COM OS CUSTOS DE ACESSO EM VETORES

- vetor v
	Custo unitário, por deslocamento a partir da primeira posição 
	e.g. v[i] ou (v + i)
- lista simples
	Percorrer até alcançar a posição
	
{% highlight cpp %}

	j = 0;
	atual = lista->inicio;
	while (j++ < i-1) 
		atual = atual->prox;
	return atual;

{% endhighlight %}
	

INEFICIÊNCIA DO ACESSO EM LISTAS


- Inserção e remoção, todos utilizam esse método, 	
- E se i estiver mais próximo de lista->quantidade, do que zero?
	

Custo de inserção em listas encadeadas simples

- Custo de inserção
	- início
	- meio
	- fim
- Custo de remoção
	- inicio
	- meio
	- fim	
	
- lista duplamente encadeada
	Percorrer até alcançar a posição:
		+ Há como acelerar esse acesso?
		+ RESP: Percorrer início->fim ou fim->início?

- Consequências do duplo encadeamento
	- Gasto adicional de memória é significativo?
	- Operações de acesso, inserção, remoção ficam mais custosas?
		

- Custo de alocação (vetor x lista)



# Exercícios 

Obs.: para listas duplamente encadeadas!

##ex.1
{% highlight cpp %}
/* [ 1 ]
 Dada uma lista duplamente encadeada, percorrê-la e retornar o item na posição pos-1. 
 
 Caso pos < (l->tamanho)/2, então o percurso deve ser do início parra o fim
 Caso contrário, o percurso deve ser feito do fim para o início.
*/
Item* ponteiroParaPosicao(Lista* l, int pos);

Exemplo:
	pos = 3;
	ponteiroParaPosicao(L, pos);
	>> 0, 1, 2, 3, [4], 5, 6, 7; /* Ponteiro inicial aponta para o início */
	0, 1, >> 2, 3, [4], 5, 6, 7; /* Percorre da esquerda para direita até a posição anterior */
	 
	pos = 5;
	ponteiroParaPosicao(L, pos);
	0, 1, 2, 3, [4], 5, 6, 7 <<; /* Ponteiro inicial aponta para o fim */
	0, 1, 2, 3, [4] <<, 5, 6, 7; /* Percorre da direita para a esquerda até  posição anterior */
{% endhighlight %}


##ex.2
{% highlight cpp %}
/* [ 2 ]
 Implementar o operador de remoção direta, o qual recebe um ponteiro para o item
 a ser removido.
*/
void removerItem(Lista* l, Item* i);

Exemplo:
	0, 1, 2, 3, 4, >> 5, 6, 7; /* Neste exemplo i é um ponteiro para o item 5 */
	0, 1, 2, 3, 4, 6, 7;       /* Esta é a lista após a remoção do item i */

{% endhighlight %}

##ex.3
{% highlight cpp %}
/* [ 3 ]
 Dada uma lista duplamente encadeada, reverter a ordem de seus itens, sem a
 utilização de uma nova lista.
*/
void reverterLista(Lista* l);

Exemplo:
	0, 1, 2, 3, 4, 5, 6, 7;
	7, 6, 5, 4, 3, 2, 1, 0; 

{% endhighlight %}

4. Reimplementar as funções considerando uma lista duplamente encadeada circular.
	* O último item sempre aponta para o primeiro. 



--------------------------------------------------------------------------------
AULA TEÓRICA (22/05/2017)
				   http://paginapessoal.utfpr.edu.br/jeanmartins
				   
				   
Baixar os arquivos em:  https://goo.gl/jxIq7t
	. list.h
	. dlist.c
	. testaLista.c
	
Implementar as funções em dlist.c que ainda não estejam implementadas .

	. Item* removerProximo(Lista* l, Item* anterior)
	
	. Item* ponteiroParaPosicao(Lista* l, int pos)
	
	. Item* removerDaPosicao(Lista* l, int pos)
--------------------------------------------------------------------------------

+ Relembrar o que foi feito na última aula:


	* Relembrar o que é uma lista duplamente encadeada.	
		- Ilustrar graficamente
		
		
		
		
	* Por que de utilizar uma estrutura de dados mais complexa?
		- Eficiência
			+ Tempo gasta nas operações
			
		- Flexibilidade
			+ Remoção de itens, 
			+ Travessia da lista 
			



	* Código ilustrado em sala de aula
		- Lista* novaLista();
		- Item* novoItem(int value);
	
		- void inserirInicio(Lista* l, Item* novo);
		- void inserirProximo(Lista* l, Item* atual, Item* novo);
		- void inserirFim(Lista* l, Item* novo);
		
		- void inserirNaPosicao(Lista* l, Item* novo, int pos);
	

	
--------------------------------------------------------------------------------
EXEMPLIFICAR O CÓDIGO DE PONTEIRO PARA POSIÇÃO
--------------------------------------------------------------------------------



+ Relembrar onde paramos na aula anterior. 

	- Diferença de eficiência das funções para alcançar um item
	
	- Encadeada simples:     Somente  do inicio ao fim
	
	- Duplamente encadeada:  Ambas direções




+ Para acessar um item é sempre necessário percorrer a lista até o seu anterior.
	
	Item* ponteiroParaPosicao(Lista* l, int pos);



+ Como melhorar ainda mais a eficiência desta função? 	


+ Por que isolar essa funcionalidade?

	* Outras funções se beneficarão de uma possível melhoria!
	
	ex.: - void inserirNaPosicao(Lista* l, Item* novo, int pos);
	
	     - Item* removerDaPosicao(Lista* l, int pos);





--------------------------------------------------------------------------------
EXEMPLIFICAR CÓDIGO DE REMOÇÃO DE LISTA DUPLAMENTE ENCADEADA
--------------------------------------------------------------------------------



+ Havia pedido para que implementassem as funções de remoção

	
	
	-> Item* removerInicio(Lista* l);
	
	-> Item* removerFim(Lista* l);
	
	   
	   
	   
	   Item* removerProximo(Lista* l, Item* i);
	   
	   Item* removerDaPosicao(Lista* l, int pos);




+ Ilustrar a implementação das duas primeiras


	* Serão úteis para ilustrar listas circulares







--------------------------------------------------------------------------------
LISTAS CIRCULARES DUPLAMENTE ENCADEADAS
--------------------------------------------------------------------------------

+ Introduzir graficamente a ideia de lista circular duplamente encadeada




+ Adaptar o código das funções de remoção que estarão no quadro.





+ Mostrar que a atualização da circularidade deve sempre acontecer na
	
	- void inserirInicio(Lista* l, Item* novo);
	
	- void inserirFim(Lista* l, Item* novo);
	
	- Item* removerInicio(Lista* l);
	
	- Item* removerFim(Lista* l);




+ Questionar sobre os cuidados ao se percorrer uma lista circular

	- Quais outras funções precisam ser revistas?




--------------------------------------------------------------------------------
EXERCÍCIOS: 22/05
--------------------------------------------------------------------------------


[ 1 ] --------------------------------------------------------------------------

Implementar a função

	void removerItem(Lista* lista, Item* i);

a qual deve remover um item de uma lista duplamente encadeada, recebendo o próprio item como argumento, e não o item anterior 
	
	ex.:> L = (1, 2, 3, 4, 5, 6, 7)
	
	    > removerItem(L, 4);
	     
	    > L = (1, 2, 3, 5, 6, 7)


[ 2 ] --------------------------------------------------------------------------

Utilizando-se a função acima, implemente uma função
	
	void reverterLista(Lista* l);

que reverta a ordem dos itens da lista recebida como argumento.
	
	ex.:> L = (1, 2, 3, 4, 5, 6, 7)
	
	    > reverterLista(L);
	     
	    > L = (7, 6, 5, 4, 3, 2, 1)
	     
[ 3 ] --------------------------------------------------------------------------

Implemente uma função

	bool verificaPalindromo(Lista* l);
	
a qual recebe uma lista de inteiros e retorna true caso ela seja um palíndromo.

	ex.:> L = (1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1)
	
	    > verificaPalindromo(L);
	     
	    > true;
	    
	    
[ 4 ] --------------------------------------------------------------------------   
	     






 
