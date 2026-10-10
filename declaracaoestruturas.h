#ifndef DECLARACAOESTRUTURAS_H
#define DECLARACAOESTRUTRAS_H

// 1. Dados do Voo
typedef struct voo {
 char codigoVoo[10]; // Chave Primária (Ex: "LA3042")
 char companhia[30]; // Ex: "LATAM", "GOL"
 char origem[20]; // Ex: "MCZ"
 char destino[20]; // Ex: "GRU"
 int numPassageiros;
 float combustívelMin; // Minutos de combustível restante
char comando[10];
} Voo;

// 2. Tabela Hash com Mapeamento por Encadeamento
#define TAM_HASH 13
typedef struct {
 Voo* tabela[TAM_HASH];
} TabelaHash;

// 3. Fila FIFO de Pouso
#define TAM_FILA 10
typedef struct {
 int inicio;
 int fim;
 int quantidade;
 Voo* itens[TAM_FILA];
} FilaPouso;

// 4. Pilha LIFO de Comandos da Torre (Undo)
#define TAM_PILHA 10
typedef struct {
 int topo;
 Voo* itens[TAM_PILHA];
} PilhaTorre;



#endif