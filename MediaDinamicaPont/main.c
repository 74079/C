#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void preenche_vetor(float *notas, int qtde);
void mostra_vetor(float *notas, int qtde);
void mostra_vetorFinal(float *notas, int qtde);
int main() {

	float *notas;
	int qtde_notas;

	printf("digite quantas notas deseja adicionar: ?");
	scanf("%d",&qtde_notas);

	notas = (float *) malloc (qtde_notas*sizeof(float));
	preenche_vetor(notas, qtde_notas);
	mostra_vetor(notas, qtde_notas);
	free(notas);


	printf("***\nmostra vetor final\n***");
	mostra_vetorFinal(notas, qtde_notas);
	notas = null;

	getch();
}


void preenche_vetor(float *notas, int qtde) {
    int i;
    for ( i =0; i < qtde; i++)
	{
		printf("Digite a nota %d de %d ", i+1,qtde);
		scanf("%f", notas+i);
	}

}




void mostra_vetor(float *notas, int qtde) {
    float soma=0, media , maior = 999.99, menor = -999.99;
    int i;
    for ( i =0; i < qtde; i++)
	{
		printf("Endereco: %d, nota: %.2f\n",notas+i,*(notas+i));
		soma+= *(notas+i);
	}
	media=soma/qtde;
	printf("Media das notas: %.2f", media);

	if(media >= maior)
	{
		printf("a madia maior e de %.2f",media);
	}
		else if(media <= menor)
		{
			printf("a madia menor e de %.2f",media);

		}

}
