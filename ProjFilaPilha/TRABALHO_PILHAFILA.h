#ifndef TRABALHO_PILHAFILA_H_INCLUDED
#define TRABALHO_PILHAFILA_H_INCLUDED

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

  struct novo
{
      int valor_numero;
	  struct novo *proximo;
} ;


int vazia(struct novo  *PONTEIRO_INICIO)
{
	if (PONTEIRO_INICIO == NULL)
        {
		return 1;
	    }
	    else
            {
		      return 0;
            }
}

	void insere(struct novo **PONTEIRO2_INICIO, struct novo  **PONTEIRO2_FIM, int ELEMENTO)
	{
        struct novo *PONTEIRONOVO;
        PONTEIRONOVO = (struct novo *)  malloc (sizeof(struct novo  ));
        PONTEIRONOVO->valor_numero = ELEMENTO;

        if((*PONTEIRO2_FIM) = NULL)
        {

            (*PONTEIRO2_FIM) = (*PONTEIRO2_INICIO) = PONTEIRONOVO;
            (*PONTEIRO2_FIM) -> proximo = NULL;
        }

                    else
                    {
                        (*PONTEIRO2_FIM) -> proximo = PONTEIRONOVO;
                        (*PONTEIRO2_FIM) = PONTEIRONOVO;
                        (*PONTEIRO2_FIM) -> proximo = NULL;
                    }
    printf("ENDERECO DA NOVA STRUCT NOVO GERADA = %d\n",PONTEIRONOVO);
    printf("NOVO NUMERO GERADO DA NOVA STRUCT NOVO = %d\n",PONTEIRONOVO->valor_numero);
    printf("ENDERECO DO PONTEIRO --> *PONTEIRO_INICIO = %d\n",*PONTEIRO2_INICIO);
    printf("VALOR DO SO NUMERO DA STRUCT NOVO (APONTADO PELO *PONTEIRO_INICIO) = %d\n",(*PONTEIRO2_INICIO)->valor_numero);
    printf("ENDERECO DO STRUCT NOVO (DO *PONTEIRO_FIM) = %d\n",(*PONTEIRO2_FIM)->proximo);
    printf("VALOR DO SO NUMERO DA STRUCT NOVO (APONTADO PELO *PONTEIRO_FIM) = %d\n",(*PONTEIRO2_FIM)->valor_numero);
    system("pause>NULL");


	}

	void consulta_lista(struct novo  *PONTEIRO2_INICIO)
	{
	    if(vazia(PONTEIRO2_INICIO))
        {
            printf("LISTA ESTA FAZIA!");
        }
            else
            {
                printf("FILA ATUAL!!\n");
                do
                {
                     printf("\nO ENDERECO: %d - VALOR DO ITEM = %d - ENDERECO DO PROXIMO = %d",PONTEIRO2_INICIO,PONTEIRO2_INICIO->valor_numero,PONTEIRO2_INICIO->proximo);
                     PONTEIRO2_INICIO = PONTEIRO2_INICIO ->proximo;
                }    while (PONTEIRO2_INICIO!=NULL);

            }
    printf("\n\nTECLE ALGO PARA CONTINUAR\n\n");
    system("pause>NULL");


}


    int retira (struct novo  **PONTEIRO2_INICIO, struct novo  **PONTEIRO2_FIM)
    {
        int VER_VALOR_paraAPAGAR;
        struct novo  *PONTEITO_NOVO_EXCLUIDO;

        if((*PONTEIRO2_INICIO) = NULL)
        {
            printf("fila vazia!");
            return 0;
        }
            else
            {
                printf("O ENDERECO DA (NOVO_STRUCT novo) VALOR_NUMERO A SER RETIRADO = %d\n", *PONTEIRO2_INICIO);
                printf("O VALOR DO (NOVO_STRUCT novo) VALOR_NUMERO A SER RETIRADO = %d\n", (*PONTEIRO2_INICIO)->valor_numero);

                PONTEITO_NOVO_EXCLUIDO =(*PONTEIRO2_INICIO);
                VER_VALOR_paraAPAGAR = (*PONTEIRO2_INICIO)->valor_numero;
                (*PONTEIRO2_INICIO) = (*PONTEIRO2_INICIO) -> proximo;

                    if((PONTEIRO2_INICIO)== NULL)
                    {
                        ((*PONTEIRO2_INICIO) = NULL);
                    }
                        if((*PONTEIRO2_INICIO) != NULL)
                        {
                            printf("O NOVO ENDERECO DO PONTEIRO (NOVO_STRUCT novo) APONTADO PELO PONTEIRO--> *PONTEIRO2_INICIO = %d\n",*PONTEIRO2_INICIO);
                            printf("O NOVO VALOR (NOVO_STRUCT novo) APONTADO PELO PONTEIRO--> *PONTEIRO2_INICIO = %d\n",(*PONTEIRO2_INICIO)->valor_numero);
                            printf("O NOVO VALOR --> PRÓXIMO <-- (NOVO_STRUCT novo) APONTADO PELO PONTEIRO--> *PONTEIRO2_INICIO = %d\n",(*PONTEIRO2_INICIO)->proximo);
                        }
                free(PONTEITO_NOVO_EXCLUIDO);
             }
             return 0;
    }



#endif // TRABALHO_PILHAFILA_H_INCLUDED
