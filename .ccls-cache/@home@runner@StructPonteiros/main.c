#include <stdio.h>

typedef struct e
{
int valor;
struct e *prox; // ponteiro para o proximo elemento da sequencia
}elemento, *pelemento ; //*pelemento é adicionado quando criar a função inserir


// parte do passo 3
void lista(struct e *el)
{
  printf("%d \n",el->valor);

  if(el->prox != NULL)
  lista(el->prox); // chama a função recursivamente passando como paramêtro o próximo elemento da fila
}
// -----------

// parte do passo 4

// plemento é um ponteiro para a struct p, sem vinculo com nenhuma variável, serve somente como tipagem de retorno
pelemento inserir(struct e *fim ,struct e *el)
{ // recebe o ponteiro para o fim da fila, bem como o elemento que será adicionado ao fim da fila
  if(fim->prox == NULL)
  {
 
    fim->prox = el; // ultima posicão da fila recebe o novo elemento;
    
  }else
  {
   printf("Não é o fim!!!");
  
  } 
  
 return el;  // permite atualizar o ponteiro para o fim da fila
}

int main(void) {
// passo 1 - criar váriaves baseadas em structs e ponteiros para tais pariáveis
  elemento e1,e2;
  struct e * pe1, * pe2;

  pe1 = &e1;
  pe2 = &e2;

  pe1->valor = 10;
  pe1->prox = NULL;

  pe2->valor = 20;
  pe2->prox = NULL;

  printf("%d \n",e1.valor);
  printf("%d \n",e2.valor);

// passo 2 - Determinar o inicio e fim da fila

  struct e * inicio, * fim; // declara os ponteiros que irão pontar para o início e fim da sequencia de elementos

  inicio = &e1; // identifica o inicio da fila
  fim = &e2; // identifica o fim da fila
  
  pe1->prox = &e2; // cria a fila inicial, vinculando e1 e e2 em sequencia;

  printf("%d \n",pe1->prox->valor);
 //  apenas demonstra que a sequencia foi criada, mostrando o valor de e2 a partir de e1 (ou ponteiro para e1 (pe1))
  printf("==================================\n");


  // passo 3 - listar conteúdo da fila (lista), somente nesse momento codificar a função lista()

  lista(inicio);
// chama funcão recursiva lista(), passando o ponteiro para o inicio da fila (inicio, que na verdade aponta para e1) para listagem de todos os elementos até chegar em NULL
  printf("==================================\n");
// fim passo 3

  // passo 4 - inserir elemento na fila, no final da fila...

  // inicialmente criar elemento
  struct e e3;
  e3.valor = 5;
  e3.prox = NULL;

// nesse momento deve-se codificar a funçao inserir
   fim = inserir(fim,&e3);
  // insere o elemento novo no fim da fila e atualiza o ponteiro para o fim da fila
  
    lista(inicio);

  printf("==================================\n");

  printf("%d \n",fim->valor); // mostra que o ultimo nodo da fila foi devidamente atualizado

  // fim do passo 4

  // Desafios aos alunos :
// 1 - Adicionar um novo elemento na fila e listar;
 // 2 -  Construir um código que permita retirar um elemento da fila. Dicas : devesse retirar o primeiro elemento da fila (inicio), atualizar o apontamento do ponteiro de inicio;


  

  
  
  return 0;
}