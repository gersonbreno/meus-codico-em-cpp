#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{

	int ij , ii;
	ij = 17;
	ii = 60;
	int idade = 0;


	printf("digite a idade de uma pessoa\n");
	scanf("%i", &idade);

	if(idade <= ij)
	{
		printf("\na idade informada e de um joven\n");
	}
	else
	{
		if(idade >= ii)
		{
			printf( "\nA idade informada e de uma pessoa idosa.\n" );
		}
		else
		{
			if((idade > ij) && (idade < ii))
			{
				printf("a idade informada e de uma pessoa de meia idade\n");
			}
		}
	}


	return 0;
}
