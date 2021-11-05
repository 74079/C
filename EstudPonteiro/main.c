#include <stdio.h>
#include <stdlib.h>

int vresultado = 90; // variável global

int main()
{
    int ventrada = 100, vresultado = 0, vnumero = 10; // variáveis locais

    fquadrado3(&vresultado);

    printf("\n O valor da variavel vresultado e = %d", vresultado);


    int *pventrada = NULL; // criação do ponteiro
    int *pvresultado = &vresultado;

    printf("\n O endereço de memoria reservado para a variavel ventrada e = %d", &ventrada);

    printf("\n O conteudo de memoria a variavel ventrada e = %d", ventrada);

    pventrada = &ventrada;

    printf("\n O endereço para o qual pventrada aponta e = %d", pventrada);

    printf("\n O conteudo para o qual pventrada aponta e = %d", *pventrada);

    printf("\n O endereço para o qual pvresultado aponta e = %d", pvresultado);

    printf("\n O conteudo para o qual pvresultado aponta e = %d", *pvresultado);

    *pvresultado = 888;

    printf("\n O conteudo para o qual pvresultado aponta (apos modificacao) e = %d", *pvresultado);

    printf("\n O conteudo da variavel vresultado e = %d", vresultado);

    fquadrado2(5);

    printf("\n O valor de vresultado (apos chamada de fquadrado2) e = %d", vresultado);

    //printf("\n O valor de vnumero2 fora da funcao fquadrado2 = %d",vnumero2);

    printf("\n O valor da variavel ventrada e = %d", ventrada);

    printf("\n O valor de vresultado (1a referencia) e = %d", vresultado);

    vresultado = 100;

    fmostra();

    printf("\nO valor da variavel vresultado  (2a referencia) = %d", vresultado);

        //printf("\n O valor de vnumero2 dentro de fquadrado2() e = %d", vnumero2);

    /*

    printf("Entre com o numero: ");

    scanf("%d",&ventrada); // passagem de paramêtro por referência

    //vresultado = fquadrado(ventrada); // Passagem de parametro por valor
    fquadrado(ventrada);

    printf("\n O quadrado e = %d", vresultado);
    printf("\n O valor de vnumero e = %d", vnumero);
    */

    return 0;
    }


   void fmostra()
  {
  printf("\nO valor da variavel vresultado  em fmostra()= %d", vresultado);
  }

//int fquadrado (int vnumero){ // Passagem de parametro por valor
   void fquadrado (int vnumero)
   {
    int vquadrado; //variável local
    //vquadrado = vnumero * vnumero;
    vresultado = vnumero * vnumero;
    printf("\n O valor de vnumero dentro de fquadrado() e = %d", vnumero);
    //return vquadrado;
    }


    void fquadrado2(int vnumero2)
    {
    //int vnumero2;
    printf("\n O valor de vnumero2 dentro da funcao fquadrado2 = %d",vnumero2);
    vresultado = vnumero2 * vnumero2;
    }

     void fquadrado3(int *pventrada)
    {
    printf("\n O endereco recebido de entrada = %d",pventrada);
    printf("\n O valor atual nesse endereco e = %d",*pventrada);
    *pventrada = 111;
    printf("\n O valor apos alteracao nesse endereco e = %d",*pventrada);
    }
