#include <stdio.h>

#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv)
{
	char c;
	
	printf("digite uma letra em minucula:\n");
	scanf("%c", &c);
	if(c >= 'a')
	{
		printf("\n e a letra a <%c>", toupper (c));
	}
	

	return 0;
}