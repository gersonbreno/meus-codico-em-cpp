#include <iostream>


using namespace std;

class Pessoa
{
public:
	char nome[100];
	int idade;
	char cpf[20];
	char cidade[50];
		
};


int main(int argc, char *argv[])
{
	Pessoa pessoas[100];

	int i = 0;

	

	while(true)
	{
	char resp;
		cout << "Digite seu nome: ";
		cin >> pessoas[i].nome;
		cout << "Digite sua idade: ";
		cin >> pessoas[i].idade;
	     cout << "digite sua cidade: ";
		 cin >> pessoas[i].cidade;
	

		cout << "voce desjesa continua tecle <s> sim ou <n> para nao...." << endl;
		cin >> resp;

		if (resp != 's')
	

			break;

			i++;

	
	}
	cout << endl;
	cout << "exibindos resultados................\n\n" ;
	
		
   

	for(int j = 0; j <= i ; j++)
	{
		
		
		cout << "Nome completo: "<< pessoas[j].nome <<endl;
		cout << "Idade: "<< pessoas[j].idade << endl;
		cout << "cidade e: " << pessoas[j].cidade << "\n\n" ;
	}
		
	
	
	
	
	
		
	
	return 0;
}
