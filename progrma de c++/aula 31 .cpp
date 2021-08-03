#include <iostream>
using namespace std;

class Carro
{
public:
	int ano;
	double preco;

	Carro()
	{
			ano = 0;
			preco = 0.0;
	}
	Carro (int ano)
	{
		this->ano = ano;
		this->preco = 0.1;
	}
	Carro(int ano, double preco)
	{
		this->ano = ano;
		this->preco = preco;
	}
};

int main(int argc, char *argv[])
{
	Carro carro;
	Carro carro2(2020);
	Carro carro3(2020, 12000);
cout << "preco do carro: " << carro.preco << endl;
cout << "preco do carro2: " << carro2.preco << endl;
cout << "preco do carro3: " << carro3.preco << endl;
	return 0;
}
