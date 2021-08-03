#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
	float n1, n2 , n3, n4, resp;
	n1 = n2 = n3 = n4 = resp = 0;
	int media;


	printf("Digite a primeira nota: ");
	scanf("%f" , &n1);
	printf("Digite a segunda nota: ");
	scanf("%f" , &n2);
	printf("Digite a terceira nota: ");
	scanf("%f" , &n3);
	printf("Digite a quarta nota: ");
	scanf("%f" , &n4);
	resp = (n1 + n2 + n3 + n4) / 4;;
printf("A sua media escola foi: %f\n\n", resp); 

if(resp >= 6)
{
	printf("voce foi aprovado \n\n");
}else
{
	printf("voce foi reprovado: \n\n");
}

		   return 0;
}
