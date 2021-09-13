#include <stdio.h>
#include <stdbool.h>

#define MAX 50
typedef unsigned int u_int;

typedef struct {
    u_int chave;
} REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int NElemento;
} LISTA;

void inicializarLista(LISTA* l) {
    l->NElemento = 0;
}

void exibirLista(LISTA* l) {
    printf("Lista: \" ");

    for(int i = 0; i < l->NElemento; i++) 
        printf("%i", l->A[i].chave);
}

int buscaSequencial(LISTA* l, u_int ch) {
    int i = 0;
    while(i < l->NElemento) {
        if(ch == l->A[i].chave) return i;

        else i++;
    }
    return -1;
}

bool inserirElemento(LISTA* l, REGISTRO reg, int i) {
    int j; 
    


    if((l->NElemento == MAX) || (i < 0) || (i > l->NElemento)) return false;
        
    for(j = l->NElemento; j > i; j--) l->A[j] = l->A[j - 1];

    l->A[i] = reg;
    l->NElemento++;
    return true;
}


int size(LISTA* l) {
    return l->NElemento;
}

bool ExcluirElemento(u_int ch, LISTA* l) {
    int pos, j;
    pos = buscaSequencial(l, ch);

    if(pos == -1) return false;

    for(j = pos; j < l->NElemento - 1; j++)
        l->A[j] = l->A[j+1];

    l->NElemento--;
    return true;

}

void reiniciarLista(LISTA* l) {
    l->NElemento = 0;
}


int main(int argc, char *argv[]) {
    LISTA* lista;

    return 0;
}
