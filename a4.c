
#include <stdio.h>
struct Lista {
    int valor;
    Lista *prox;
};

int main(){
    Lista *lista = NULL;
}

Lista *inserir(Lista *lista, int num)
{
    Lista *tmp;
    tmp = Lista;
    tmp -> valor = num;
    tmp -> prox = lista;
    lista = tmp;
    return lista;
}

Lista *concatena(Lista * lista1, Lista *lista2){
    Lista *fim = NULL;
    Lista *tmp = lista1;

    while(tmp->prox != NULL){
        tmp = tmp->prox;
    }
    tmp = inserirInicio(inicio2, tmp->valor);
}
