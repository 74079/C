#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int fibonnaci(int num);

void main()
{
	int i,num, resultado;
	float vtempo;


    printf("Digite um numero qualquer: ");
    scanf("%d",&num);



    vtempo = clock();

    resultado = fibonnaci(num);
	for(i = 1; i <= num; i++)
    {
        printf("Procissao %d = %ld\n",i, fibonnaci(i));

    }

		vtempo = clock() - vtempo;
        printf("\n\nTempo de execuçao: %3.1f", ((double)vtempo)/((CLOCKS_PER_SEC/1000)));
}


int fibonnaci(int num)
{
	if(num <= 1) return num;
       return fibonnaci(num - 1) + fibonnaci(num - 2);
}
