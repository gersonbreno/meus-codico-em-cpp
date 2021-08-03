#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
	
	char nome[100], sobrenome[100];

	cout << "digite seu nome: ";
	cin >> nome;
	cout << "digite seu Sobrenome: ";
	cin >> sobrenome;
	
	strcat(nome, sobrenome);
	cout << " seu nome: " << nome;
	
	return 0;
}
