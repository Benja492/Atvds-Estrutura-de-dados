Escreva um programa que cadastre uma lista de números. Deve-se ter uma função para remover
da lista os números negativos.

struct Lista {
    int valor;
    Lista *prox;
};

void cadastra_nums(Lista *lista){
    lista->valor = 1;

    if (Lista->valor < 0){
        remove_num(lista);
    }

    return 0;
}

void remove_num(Lista *lista){
    Lista *nada = NULL;
    lista->prox = nada;

    return 0;
}

int main(){
    Lista *lista = NULL;
    cadastra_nums(lista);
    cadastra_nums(lista);
    cadastra_nums(lista);
    cadastra_nums(lista);
    cadastra_nums(lista);
    cadastra_nums(lista);

    return 0;
}
