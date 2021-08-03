#include <iostream>
using namespace std;
int my_strlen(char * str){
	int tam = 0;
	while(*str != '\0')
		str++;
		tam++;
	return tam;
}


char * my_strcat(char * dest, char * orig)
{
	char * resultado;
	int tam_dest = my_strlen(dest);
	int tam_orig = my_strlen(orig);
	
	resultado = new char[tam_dest + tam_orig];
	while(*dest != '\0')
	{
		*resultado = *dest;
		resultado++;
		dest++;
	}
	return resultado;
}



int main(int argc, char *argv[])
{
	char * nome1 = new char [100];
	char * nome2 = new char[100];
	char * resultado;
	cout << "digite o primeiro nome: ";
	cin >>nome1;
	cout << "digite o segundo nome: ";
	cin >>nome2;
	
	cout <<"RESULTADO "<< my_strcat(nome1, nome2) << endl;
	
	
	return 0;
}