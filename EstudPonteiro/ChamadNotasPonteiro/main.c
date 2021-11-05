#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#define BUFFER 64

typedef struct lista
{
    char *cedulas;
	int nota2 ;
	int nota5 ;
	int nota10 ;
	int nota20 ;
	int nota50 ;
	int nota100 ;
	int nota200 ;
	struct lista *proximo;
} NOTAS;

NOTAS *inicia_dados(char *cedulas, int nota2, int nota5, int nota10,int nota20 ,int nota50,int nota100 ,int nota200);
NOTAS *insere_dados(NOTAS *dados,char *cedulas, int nota2, int nota5, int nota10,int nota20 ,int nota50,int nota100 ,int nota200);
int checa_vazio(NOTAS *dados);
void busca_dados(NOTAS *dados, char *chave);

void exibe_dados(NOTAS *dados);

void insere(void);
void exibe(void);
void busca(void);

NOTAS *principal = NULL;

 NOTAS *inicia_dados(char *cedulas, int nota2, int nota5, int nota10,int nota20 ,int nota50,int nota100 ,int nota200)
{
	NOTAS *novo;

    novo = (NOTAS*)malloc(sizeof(NOTAS));
	novo->cedulas = (int*)malloc(strlen(cedulas)+1);
	strncpy(novo->cedulas, cedulas,strlen(cedulas)+1);

    novo->nota2 = nota2;
	novo->nota5 = nota5;
	novo->nota10 = nota10;
	novo->nota20 = nota20;
	novo->nota50 = nota50;
	novo->nota100 = nota100;
	novo->nota200 = nota200;
	novo->proximo=NULL;
	return novo;
}

NOTAS *insere_dados(NOTAS *dados_notas,char *cedulas, int nota2, int nota5, int nota10,int nota20 ,int nota50,int nota100 ,int nota200)
{
	NOTAS *novo;

    novo = (NOTAS*)malloc(sizeof(NOTAS));
	novo->cedulas = (int*)malloc(strlen(cedulas)+1);
	strncpy(novo->cedulas, cedulas,strlen(cedulas)+1);

    novo->nota2 = nota2;
	novo->nota5 = nota5;
	novo->nota10 = nota10;
	novo->nota20 = nota20;
	novo->nota50 = nota50;
	novo->nota100 = nota100;
	novo->nota200 = nota200;
	novo->proximo=NULL;
	return novo;
}

void exibe_dados(NOTAS *dados)
{
    int achou =0;
	fprintf(stdout,"Registro De Leitura Notas:\n\n");
	fprintf(stdout, "------------------------\n");
    for (; dados != NULL; dados = dados ->proximo)
	{

        fprintf(stdout, "Cedulas: %s\n", dados->cedulas);
    	fprintf(stdout, "Nota2: %d\n", dados->nota2);
        fprintf(stdout, "Nota5: %d\n", dados->nota5);
        fprintf(stdout, "Nota10: %d\n", dados->nota10);
        fprintf(stdout, "Nota20: %d\n", dados->nota20);
        fprintf(stdout, "Nota50: %d\n", dados->nota50);
        fprintf(stdout, "Nota100: %d\n", dados->nota100);
        fprintf(stdout, "Nota200: %d\n", dados->nota200);
    	fprintf(stdout, "------------------------\n ");
    	achou++;
	}
    printf("Pressione uma tecla para continuar.");
    getch();
}

void busca_dados(NOTAS *dados, char *chave)
{
	int achou =0;
	fprintf(stdout, "Cadastro:\n\n");
	for (; dados != NULL; dados = dados->proximo)
	{
		if(strcmp(chave, dados ->cedulas) == 0)
	    {
	    	fprintf(stdout, "------------------------\n");

        fprintf(stdout, "Cedulas: %s\n", dados->cedulas);
    	fprintf(stdout, "Nota2: %d\n", dados->nota2);
        fprintf(stdout, "Nota5: %d\n", dados->nota5);
        fprintf(stdout, "Nota10: %d\n", dados->nota10);
        fprintf(stdout, "Nota20: %d\n", dados->nota20);
        fprintf(stdout, "Nota50: %d\n", dados->nota50);
        fprintf(stdout, "Nota100: %d\n", dados->nota100);
        fprintf(stdout, "Nota200: %d\n", dados->nota200);;
        fprintf(stdout, "------------------------\n");
        achou++;
    	}
	}

	if(achou ==0)
	fprintf(stdout, "Nenhum resultado encontrado.\nPressione uma tecla para continuar.\n");
	else
	fprintf(stdout, "Foram encontrados %d registros. \nPressione uma tecla para continuar.\n", achou);

    sleep(1);
    getch();
}


int checa_vazio(NOTAS *dados)
{

    if (dados == NULL)
	{
    fprintf(stdout, "Lista vazia!\\n");
    sleep(1);
    return 1;
    }

    else
    return 0;
  }


 insere(void)
{
    NOTAS dados;
    char *cedulas ;
   	int nota2 = 0;
	int nota5 = 0;
	int nota10 = 0;
	int nota20 = 0;
	int nota50 = 0;
	int nota100 = 0;
	int nota200 = 0;
    cedulas = (char *)malloc(BUFFER);

    int Dig2, Dig5 = 0,  Dig10 = 0,Dig20 = 0, Dig50 = 0, Dig100 = 0, Dig200 = 0;
    char *DigiteCedula;


    int *Ponteiro = NULL;

    fprintf(stdout,"\n\nDIGITE digite o tipo de cedula: \n----> ");
    scanf("%s",&cedulas);
	fprintf(stdout,"\n");


    Ponteiro = &cedulas;
    *Ponteiro = DigiteCedula;

    fprintf(stdout,"\n\nNota = R$:2 DIGITE -->(1) PARA LER OU -->(0) PARA NAO LER: \n----> ");
    scanf("%d",&Dig2);
	fprintf(stdout,"\n");


    Ponteiro = &nota2;
    *Ponteiro = Dig2;

    fprintf(stdout, "\n\nNota = R$:5 DIGITE -->(1) PARA LER OU -->(0) PARA NAO LER: \n----> ");
    scanf("%d",&Dig5);
	fprintf(stdout,"\n");


    Ponteiro = &nota5;
    *Ponteiro = Dig5;

    fprintf(stdout,"\n\nNota = R$:10 DIGITE -->(1) PARA LER OU -->(0) PARA NAO LER: \n----> ");
    scanf("%d",&Dig10);
	fprintf(stdout,"\n");

    fprintf(stdout,"\n\nNota = R$:20 DIGITE -->(1) PARA LER OU -->(0) PARA NAO LER: \n----> ");
    scanf("%d",&Dig20);
	fprintf(stdout,"\n");

    Ponteiro = &nota10;
    *Ponteiro = Dig10;

    fprintf(stdout,"\n\nNota = R$:50 DIGITE -->(1) PARA LER OU -->(0) PARA NAO LER: \n----> ");
    scanf("%d",&Dig50);
	fprintf(stdout,"\n");

    Ponteiro = &nota50;
    *Ponteiro = Dig50;

    fprintf(stdout,"\n\nNota = R$:100 DIGITE -->(1) PARA LER OU -->(0) PARA NAO LER: \n----> ");
    scanf("%d",&Dig100);
	fprintf(stdout,"\n");

	Ponteiro = &nota100;
    *Ponteiro = Dig100;

    fprintf(stdout,"\n\nNota = R$:200 DIGITE -->(1) PARA LER OU -->(0) PARA NAO LER: \n----> ");
    scanf("%d",&Dig200);
	fprintf(stdout,"\n");

    Ponteiro = &nota200;
    *Ponteiro = Dig200;

    if (principal == NULL)
    {
        principal = inicia_dados(cedulas, nota2,  nota5,  nota10, nota20 , nota50, nota100 , nota200);
    }
    else
    {
        principal = insere_dados(principal,cedulas, nota2,  nota5,  nota10, nota20 , nota50, nota100 , nota200);
    }
}

void exibe(void)
 {
    if (!checa_vazio(principal));
         exibe_dados(principal);
 }

 void busca(void) {

        char *chave;

        if (!checa_vazio(principal)) {

                chave = (char *)malloc(BUFFER);

                fprintf(stdout, "Digite o nome  da cedula para buscar: \\n--> ");
                scanf("%s", chave);

                busca_dados(principal, chave);
                getch();
        }
}
int main(void)
{
    char escolha;

do {
        system("cls");
        fprintf(stdout,"\n Leitura de notas\n\n");
        fprintf(stdout, "Escolha uma opcao: \n\n");
        fprintf(stdout, "1 - Deseja Fazer Leitura de Notas\n");
        fprintf(stdout, "2 - Deseja Exibe Dados Os Dados Resgistrados \n");
        fprintf(stdout, "5 - Sair\n\n");

                scanf("%c", &escolha);

                switch(escolha) {
                        case '1':
                                insere();
                                break;

                        case '2':
                                exibe();
                                break;

                        case '3':
                                busca();
                                break;


                        case '5':
                                exit(0);
                                break;

                        default:
                                fprintf(stderr,"Digite uma opcao valida!\\n");
                                sleep(1);
                                break;
                }

                getchar();
        }

        while (escolha > 0);

        return 0;
}
