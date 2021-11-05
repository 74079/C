#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int vchamadas = 0;

int Fatorial(int num);

void main(){
    setlocale(LC_ALL, "Portuguese");

	int   fat, result;
	float vtempo;

	printf("Digite um número qualquer: ");
	scanf("%d", &fat);

	vtempo = clock(); // registra o horário inicial

	result = Fatorial(fat);

	printf("\n\nResultado = %d", result);

	vtempo = clock() - vtempo; //registra o tempo final - tempo inicial
    //imprime o tempo na tela
    printf("\n\nTempo de execução: %3.1f", ((double)vtempo)/((CLOCKS_PER_SEC/1000)));

	getch();
}
int Fatorial(int num){
	int aux;
	printf("\nChamada: %d num = %d",++vchamadas,num);
	if (num <=1) aux = 1;
	else aux = num * Fatorial(num-1);
	return aux;
}



