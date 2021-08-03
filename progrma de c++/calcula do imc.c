#include <stdio.h>
#include <conio.h>
#include <math.h>

#define LIMITE 30

int main(int argc, char** argv)
{
	float peso, altura, imc;

	
	printf("\nQual o seu peso ? ");
	scanf("%f", &peso);
	printf("\n Digite sua altura");
	scanf("%f", &altura);

	imc = peso/pow(altura,2);
	
	printf("\nSeu i.m.c é %f", imc);	
	
	if(imc <= LIMITE)
	{
		printf("\n Voce nao esta obeso");

	}else
	{
		printf("\nVoce esta obeso");
	}
	
	
	
	
	
	return 0;
}