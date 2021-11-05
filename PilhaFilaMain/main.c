#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "PROJ_TAD_PILHA.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");

     // Cria estrutura de dados Pilha
    struct no *ptopo = NULL;
    int vresult, vcont = 1,vnumrand;

    // Insere elementtos (n�s) na Pilha
    do {
        vnumrand = rand () % 999;
        printf("N�mero gerado = %d\n",vnumrand);
        push(vnumrand,&ptopo);
        // Lista a Pilha
        consulta(ptopo);
        vcont++;
    } while (vcont <= 3);

    // Retira elementos da Pilha
    vcont = 1;
     do {
        vresult = pop(&ptopo);
        printf("%do. elemento retirado. N�mero = %d\n",vcont,vresult);
        // Lista a Pilha
        consulta(ptopo);
        vcont++;
    } while (vcont <= 3);


    return 0;
}

