#include <stdio.h>
#include <stdlib.h>
struct tipoLista{
    int numeros;
    struct tipoLista *prox;
};

void *inverte(tipoLista *p){
  tipoLista *a, *b, *c;
  a = NULL;
  b = p;
  while(b != NULL){
    c = b->prox;
    b->prox = a;
    a = b;
    b = c;

  }
  return 0;
}

int main(){
    tipoLista *num=malloc(sizeof(tipoLista));
    num->numeros = 1;
    aux->prox = 2;

printf("Invertendo os numeros\n");
lista = inverte(primeiro);
return 0;
}


