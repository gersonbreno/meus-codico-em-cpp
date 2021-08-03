#include <iostream>
#include <string.h>
using namespace std;
class Pessoa
{
public:
	char nome[100];
	char cpf[100];
	int idade;

};
int getIdade(Pessoa pessoas[], const char* nome)
{
	int tam = sizeof(pessoas);
	for(int i = 0; i < tam ; i++)
	{
		if(strcmp(nome, pessoas[i].nome) == 0)
			return pessoas[i].idade;
		}
	return -1;
}
int main(int argc, char *argv[])
{
	Pessoa pessoas[3] =
	{
		{"breno", "7060766566", 45},
		{"gerson", "7060766566", 14},
		{"pedro", "7060766566", 56},
	};
	cout << "nome: " << pessoas[0].nome << endl;
	cout << "nome: " << pessoas[1].nome << endl;
	cout << "nome: " << pessoas[2].nome << endl;
	
	int idade = getIdade(pessoas, "macos");
	
	if(idade != -1)
	{
		cout << "idade do pedro: " << idade << endl;
	}
	else
	{
		cout << "pessoa nao encontrada." << endl;
	}
	cout << "exibindo os carro ordenado pelo nome "
	
	return 0;
}
