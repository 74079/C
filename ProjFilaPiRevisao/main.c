#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TAD_FILA.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");

     /* Cria estrutura de dados Pilha assim crio dois ponteiro aqui para apontar para aponta para estrutura da TAD_PILHA*/



     NOVO_STRUCT *PONTEIROINICIO = NULL; // CRIO UMA ESTRUTURA PONTEIRO QUE APONTA PARA NOVO INICIAL DA ESTRUTURA NOVO_STRUCT
     NOVO_STRUCT *PONTEIROFINAL = NULL; //  CRIO UMA ESTRUTURA PONTEIRO QUE APONTA PARA NOVO FINAL DA ESTRUTURA  NOVO_STRUCT
    int RESULTADO, CONTADOR_ADCIONA = 1,NUMERO_GERADO_RAND_LUP;

    /* AQUI ELE GERA E INSERE OS NUMERO ALEATORIO DE INICIO E FIM PARA A ESTRUTURA NOVO DA ESTRUTURA NOVO DA NOVO_STRUCT
       FEITO ISSO ELE PEGA ESSES NUMERO E MANDA MAPARA A FUNCAO INSERE DA TAD_FILA */
    do {
           NUMERO_GERADO_RAND_LUP = rand () % 999;
           printf("NUMERO GERADO PELA RAND = %d\n",NUMERO_GERADO_RAND_LUP);

            insere(&PONTEIROINICIO,&PONTEIROFINAL,NUMERO_GERADO_RAND_LUP);
            CONTADOR_ADCIONA++;
            while (CONTADOR_ADCIONA <= 3);
       }

            lista_listapilha_consulta(PONTEIROINICIO);
            CONTADOR_ADCIONA = 1;
     do {
            VER_RESULTADO = retira(&PONTEIROINICIO,&PONTEIROFINAL);// AQUI ELE RECEBE TODOS OS NUMERO DE INICIO E FIM E VAI TODOS PARA VER_RESULTADO
             printf("VALOR NUMERO RETIRADO DO --> VER_CONTADOR_ADCIONA: %d NUMERO = %d\n",CONTADOR_ADCIONA,RESULTADO);

             lista_listapilha_consulta(PONTEIROINICIO);
             CONTADOR_ADCIONA++;
             while (CONTADOR_ADCIONA <= 3);
        }


    return 0;
}

