#include <iostream>
#include <string.h>
using namespace std;

class Estudante
{
	public:
		char* nome;

	
	Estudante(const char* nomme)
	{
		cout << "Contruindo objetos.." << endl;
		
		int tam = strlen(nome) + 1;
		this->nome = new char[tam];
		strcpy(this->nome, nome);
	}
	
	Estudante(const Estudante& e)
	{
		cout << "Contruindo copia..." << endl;
		int tam = strlen(e.nome) + strlen("copia de ") + 1;
		this->nome = new char[tam];
		strcpy(this->nome, "Copia de " );
		strcat(this->nome, e.nome);
	}
		const char* getNome()
		{
			return nome;
		}
		int getIdade()
		{
			
		}
			
};

void foo()
{
	   	
}

int main(int argc, char *argv[])
{
	Estudante e("breno");
	

	
	

	return 0;
}