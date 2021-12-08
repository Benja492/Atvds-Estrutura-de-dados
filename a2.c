#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct tipoFace{
    int id;
	char nome[50];
	int idade;
	struct tipoFace *prox;
	struct tipoFace *amigos;
};

tipoFace cadastra_humano(int id){
	tipoFace *humano = malloc(sizeof(tipoFace));
	printf("Nome: ");
    scanf("%s", &humano->nome)

	printf("Idade: ");
	scanf("%i", &humano->idade);

    humano->id = id;

	humano->prox = NULL

	return humano;

}


void relaciona_amigo(tipoFace *p1, tipoFace *p2){

  p1->amigos = p2;
  p2->amigos = p1;


  return 0;
}


int main(){
    tipoFace h1 = cadastra_humano(1);
    tipoFace h2 = cadastra_humano(2);
    relaciona_amigo(h1, h2);
    return 0;
}
