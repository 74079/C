#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TRABALHO_PILHAFILA.h"

int main()
{
     setlocale(LC_ALL, "Portuguese");

     struct novo  *PONTEIRO_INICIO = NULL;
     struct novo  *PONTEIRO_FINAL = NULL;
    int RESULTADO, CONTADOR_ADCIONA = 1,NUMERO_GERADO_RAND_LUP;




         do{
               NUMERO_GERADO_RAND_LUP = rand () % 999;
               printf("NUMERO GERADO PELA RAND = %d\n",NUMERO_GERADO_RAND_LUP);

                insere(&PONTEIRO_INICIO,&PONTEIRO_FINAL,NUMERO_GERADO_RAND_LUP);

                CONTADOR_ADCIONA++;
               } while (CONTADOR_ADCIONA <= 3);


                consulta_lista(PONTEIRO_INICIO);

               CONTADOR_ADCIONA = 1;



     do {
            RESULTADO = retira( &PONTEIRO_INICIO,&PONTEIRO_FINAL);
             printf("VALOR NUMERO RETIRADO DO --> VER_CONTADOR_ADCIONA: %d NUMERO = %d\n",CONTADOR_ADCIONA,RESULTADO);

             consulta_lista(PONTEIRO_INICIO);
             CONTADOR_ADCIONA++;
            } while (CONTADOR_ADCIONA <= 3);



    return 0;
}
