#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct noDaLista NoDaLista;
struct noDaLista  {
    char titulo[51];
    char autor[51];
    int ano;
    int quantidade;
    NoDaLista *prox;
};

void insere_livro(NoDaLista* lista, char *nome, char *autor, int ano,int qtd)  {
    NoDaLista* p = (NoDaLista*) malloc(sizeof(NoDaLista));
    strcpy(p->titulo, nome);
    strcpy(p->autor, autor);
    p->ano = ano;
    p->quantidade = qtd;
    p->prox = lista;

    printf("Livro Adicionado!");
    return 0;
}

void quantidade_livros(NoDaLista *livros){
	int qtdd=0;
	while (livros != NULL){
		qtdd += livros->quantidade;
    	livros= livros->prox;
	}
	printf("\n Quantidade: %i", qtdd);
	return 0;
}

void busca_por_ano(NoDaLista *livro, int ano){

	if(livro !=NULL) && (ano==livro->ano){
			printf("Titulo: %s", livro->titulo);
            busca_por_ano(livro->prox, ano);
	}

    return 0;
}

int main (void)  {
    NoDaLista *lista = NULL;
    lista = insere_livro(lista, "LivroTitulo", "LivroAutor", 2021, 100);
    qtdd = quantidade_livros(NoDaLista);
    busca = busca_por_ano(2021);

    return 0;
}
