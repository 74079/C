#include <stdio.h>
#include <stdlib.h>



int Soma(int num);
void main()
{
    int num, result;
    system("cls");
    printf("Digite um numero qualquer: ");
    scanf("%d", &num);

    result = Soma(num);

    printf("Resultado = %d", result);
    getch();
    }

    int Soma(int num)
    {
        int aux;
        if (num == 0) aux = 0;
        else
            aux = num + Soma(num-1);
        return aux;
    }

