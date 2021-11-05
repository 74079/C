#include <stdio.h>
#include <stdlib.h>

     void calcular(int lado, int *pPerimetro, int *pArea)
    {
	*pPerimetro = lado * 4;
	*pArea = lado * lado;
    }

int main(){

	int valorLado;
	int perimetro, area;

	printf("Digite o valor de um lado do quadrado: ");
	scanf("%d",&valorLado);

	calcular(valorLado, &perimetro, &area);

	printf("\nO valor do perimetro eh: %d", perimetro);
	printf("\nO valor da area eh: %d", area);
}
