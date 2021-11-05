#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#define BUFFER 64


typedef struct lista
{
    char *rua;
	char *cidade;
	char *estado;
	int numero;
	int cep;
	struct lista *proximo;
} Dados;

typedef struct
{
    char *nome;
	int telefone;
	Dados registro_clientes;

} FICHA_CADASTRO;


Dados *inicia_dados(char *nome,int telefone);

Dados *insere_dados(FICHA_CADASTRO *dados, char *nome,  int telefone);

Dados *inicia_dados(char *rua, char *cidade, char *estado, int numero,int cep);

Dados *insere_dados(Dados *dados, char *rua, char *cidade, char *estado, int numero,int cep);

void exibe_dados(Dados *dados);

void exibe_dados(Dados *dados);

void busca_dados(Dados *dados, char *chave);

void busca_dados(Dados *dados, char *chave);

Dados *deleta_dados(Dados *dados);

Dados *deleta_dados(Dados *dados);

int checa_vazio(Dados *dados);

void insere(void);
void exibe(void);
void busca(void);
void deleta(void);

Dados *principal = NULL;


Dados *inicia_dados(char *nome,int telefone)
{
        Dados *novo;

        novo = (Dados *)malloc(sizeof(Dados));
		novo->nome = (char *)malloc(strlen(nome)+1);
        strncpy(novo->nome, nome, strlen(nome)+1);

        novo->telefone = telefone;
        novo->proximo = NULL;

        return novo;
}

Dados *insere_dados(FICHA_CADASTRO *dados, char *nome, char *rua, char *cidade, char *estado, int telefone, int numero,int cep)
{
	 Dados *novo;

        novo = (Dados *)malloc(sizeof(Dados));
        novo->nome = (char *)malloc(strlen(nome)+1);
        strncpy(novo->nome, nome, strlen(nome)+1);

        novo->telefone = telefone;
        novo->proximo = dados;

        return novo;
}


/* Percorre todos os campos da lista e imprime ate o ponteiro proximo chegar em NULL. */
void exibe_dados(Dados *dados) {

        fprintf(stdout, "Cadastro:\n\n");

        fprintf(stdout, "------------------------\n");

        for (; dados != NULL; dados = dados->proximo) {
                fprintf(stdout, "Nome: %s\n", dados->nome);
                fprintf(stdout, "rua: %s\n", dados->rua);
                fprintf(stdout, "cidade: %s\n", dados->cidade);
                fprintf(stdout, "estado: %s\n", dados->estado);
                fprintf(stdout, "telefone: %d\n", dados->telefone);
                fprintf(stdout, "numero: %d\n", dados->numero);
                fprintf(stdout, "cep : %d\n", dados->cep);
                fprintf(stdout, "------------------------\n ");
        }
        printf("Pressione uma tecla para continuar.");
        getch();
}

/* Percorre cada ponta comparando o nome com a chave. */
void busca_dados(Dados *dados, char *chave) {

        int achou = 0;

        fprintf(stdout, "Cadastro:\n\n");
        for (; dados != NULL; dados = dados->proximo) {
                if (strcmp(chave, dados->nome) == 0) {

                        fprintf(stdout, "------------------------\n");
                        fprintf(stdout, "Nome: %s\n", dados->nome);
                		fprintf(stdout, "rua: %s\n", dados->rua);
               			fprintf(stdout, "cidade: %s\n", dados->cidade);
                		fprintf(stdout, "estado: %s\n", dados->estado);
                		fprintf(stdout, "telefone: %d\n", dados->telefone);
                		fprintf(stdout, "numero: %d\n", dados->numero);
                		fprintf(stdout, "cep : %d\n", dados->cep);
                        fprintf(stdout, "------------------------\n");
                        achou++;
                }
        }

        if (achou == 0)
                fprintf(stdout, "Nenhum resultado encontrado.\nPressione uma tecla para continuar.\n");
        else
                fprintf(stdout, "Foram encontrados %d registros. \nPressione uma tecla para continuar.\n", achou);

        sleep(1);
        getch();
}

/* Deleta o ultimo registro inserido. */
Dados *deleta_dados(Dados *dados) {

        Dados *novo;

        novo = dados->proximo;

        free(dados->nome);
        free(dados);

		free(dados->rua);
        free(dados);

        free(dados->cidade);
        free(dados);

        free(dados->estado);
        free(dados);

        fprintf(stdout, "O ultimo registro inserido foi deletado com sucesso.\\n");
        sleep(1);

        return novo;
}

/* a pena checa se a lista e NULL ou nao. */
int checa_vazio(Dados *dados) {

        if (dados == NULL) {
                fprintf(stdout, "Lista vazia!\\n");
                sleep(1);
                return 1;
        } else
                return 0;
}

/* Obtem os dados necessarios para chamar as funcoes de manuseio de dados. */
void insere(void)
{
 Dados dados;

        char *nome;
        char *rua;
	    char *cidade;
	    char *estado;
	    int telefone;
	    int numero;
	    int cep;


        nome = (char *)malloc(BUFFER);

        fprintf(stdout, "\n\nDigite Nome: \n----> ");
        scanf("%s",nome);
        fprintf(stdout, "\n");


        fprintf(stdout, "Digite a rua: \n----> ");
        scanf("%s",&rua);
        fprintf(stdout, "\n");

        fprintf(stdout, "Digite a cidade : \n----> ");
        scanf("%s",&cidade);
        fprintf(stdout, "\n");

        fprintf(stdout, "Digite o estado: \n----> ");
        scanf("%s",&estado);
        fprintf(stdout, "\n");

        fprintf(stdout, "Digite o telefone: \n----> ");
        scanf("%d",&telefone);
        fprintf(stdout, "\n");

        fprintf(stdout, "Digite o numero: \n----> ");
        scanf("%d",&numero);
        fprintf(stdout, "\n");

        fprintf(stdout, "Digite o cep: \n----> ");
        scanf("%d",&cep);
        fprintf(stdout, "\n");

        if (principal == NULL)
        {
            principal = inicia_dados(nome, rua, cidade, estado, telefone, numero, cep);
        }
        else
        {
        	principal = insere_dados(principal, nome, rua, cidade, estado, telefone, numero, cep);
		}

}

void exibe(void) {

        if (!checa_vazio(principal))
                exibe_dados(principal);

}

void busca(void) {

        char *chave;

        if (!checa_vazio(principal)) {

                chave = (char *)malloc(BUFFER);

                fprintf(stdout, "Digite o nome para buscar: \\n--> ");
                scanf("%s", chave);

                busca_dados(principal, chave);
                getch();
        }
}

void deleta(void) {

        if (!checa_vazio(principal))
                principal = deleta_dados(principal);
}

int main(void) {

        char escolha;

        do {
                system("cls");
                fprintf(stdout, "\n Cadastro de Pessoas\n\n");
                fprintf(stdout, "Escolha uma opcao: \n\n");
                fprintf(stdout, "1 - Insere Dados\n");
                fprintf(stdout, "2 - Exibe Dados\n");
                fprintf(stdout, "3 - Busca Dados\n");
                fprintf(stdout, "4 - Deleta Dados\n");
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

                        case '4':
                                deleta();
                                break;

                        case '5':
                                exit(0);
                                break;

                        default:
                                fprintf(stderr,"Digite uma opcao valida!\\n");
                                sleep(1);
                                break;
                }

                //getchar(); /* E para impedir sujeira na entrada da escolha. Nao lembro de nada melhor tambem.   */
        }

        while (escolha > 0); /* Loop Principal. */

        return 0;
}
