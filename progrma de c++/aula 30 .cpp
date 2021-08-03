#include <iostream>
#include <string.h>
using namespace std;

class Pessoa 
{
private:
	char nome[40];
	int idade;
	int* parentes;
	double* filhos;
	public:
		Pessoa(const char* nome, int idade)
		{
		strcpy(this->nome, nome);
		this->idade = idade;
		parentes = new int[100];
		filhos = new double[100];
		}
		char * getNome(){
			return nome;
		}
		int getIdade()
		{
			return idade;
		}
		~Pessoa()
		{
			cout << "entrou no destutor";
			delete[] parentes;
			delete[] filhos;
		}
		
};



int main(int argc, char *argv[])
{

	Pessoa pessoas[3] = 
	{
		{"gerson", 30}, {"maria , 67"}, {"breno", 21},
		
	};
	
//cout << "nome: " << p.getNome() << endl;
	//cout << "idade " << p.getIdade() << endl;
		
	return 0;
}