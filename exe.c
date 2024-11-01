#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAMANHO_FRAME 4096
#define TAMANHO_MEMORIA 1000

typedef struct 

{
    int id;
    bool ocupado;
    int processo_id;
    int pagina_id;
    char *dados;

} Frame;

typedef struct {


} Memoria_Virtual;

typedef struct {


} Tabela_Paginas;

typedef struct {

    int id;
    Frame* memoria_fisica[TAMANHO_MEMORIA];
    int frame_nums;
    int size_memo;

} Memoria_Fisica;

void appendFrame(Memoria_Fisica *Memo, Frame *frame){

   if (Memo->frame_nums < Memo->size_memo){
    Memo->memoria_fisica[Memo->frame_nums++] = frame;
   }
}

void setMemoria(Memoria_Fisica *Memo, int id){

    Memo->id = id;
    Memo->memoria_fisica;
    Memo->frame_nums = 0;
    Memo->size_memo = TAMANHO_MEMORIA;
}

void setFrame(Frame *frame, bool ocupado, int processo_id, int pagina_id, char *dados){

    frame->ocupado = ocupado;
    frame->pagina_id = pagina_id;
    frame->processo_id = processo_id;
    frame->dados = dados;

}


int main(void){

    return 0;
}