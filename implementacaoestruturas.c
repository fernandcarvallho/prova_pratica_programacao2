#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "declaracaoestruturas.h"


// funcoes da tabela hash

int funcaoHash(const char* codigoVoo){
    int soma = 0;
    for(int i = 0; i < codigoVoo[i]!='\0'; i++){
        soma += codigoVoo[i];
    }
    return soma % TAM_HASH;
}

void inicializarHash(TabelaHash* h){
    for(int i = 0; i < TAM_HASH; i++){
        h->tabela[i] = NULL;
    }
}
void inserirHash(TabelaHash* h, Voo v){
    int indice = funcaoHash(v.codigoVoo);
    Voo* novo = (Voo*) malloc (sizeof(Voo));
    if (novo == NULL){
        printf("Erro em alocar memoria!\n");
        return;
    }
    *novo = v;
    h->tabela[indice]=novo;
}
Voo* buscarHash(TabelaHash* h, const char* codigoVoo){
int indice = funcaoHash(codigoVoo);
    if (h->tabela[indice] != NULL) {
        if (strcmp(h->tabela[indice]->codigoVoo, codigoVoo) == 0) {
            return h->tabela[indice];
        }
    }
    return NULL;
}
    

