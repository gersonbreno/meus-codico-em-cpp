#include <iostream>
#include <string.h>
#define MAX 10
using namespace std;
class Carro
{
public:
	char nome[100];
	char cor[20];
	char placa[20];
	double preco;

//parei em 25 e exatamnete em 11 minutos


};
//ordenaçao usando o algoritmo bubble sort



int main(int argc, char *argv[])
{
	Carro carros[MAX];
	int i = 0;


	while(true)
	{
		char resp;
		cout << "digite o nome do caro: " ;
		cin >> carros[i].nome;
		cout << "digite o preco: ";
		cin >> carros[i].preco;
		cout << "voce dejesa continuar? <S> SIM ou <N>NAO ";
		cin >> resp;
		if(resp != 'S')
			break;
		i++;

	}
	cout << endl;
	cout << "exibindo todos os carros....\n\n";
	for(int j = 0; j <= i ; j++)
	{
		cout << "nome do carro: " << carros[j].nome << endl;
		cout << "preco R$: " << carros[j].preco << "\n\n";

	}

	return 0;
}
