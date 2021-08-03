#include <iostream>
using namespace std;
class Conta
{
public:
	int numero;
	double saldo;

	double depositar(double quantidade)
	{
		if(quantidade > 0)
			saldo += quantidade;
		return saldo;
	}
	double retirar(double quantidade){
		if(quantidade > 0 &&  saldo >= quantidade)
			saldo -= quantidade;
		return saldo;
	}
	

};

int main(int argc, char *argv[])
{

	Conta c;
	
	c.numero = 1;
	c.saldo = 100.75;
	
	cout << "saldo: " << c.saldo << endl;
	
	cout << "novo saldo: " << c.depositar(200) << endl;

	cout << "saldo depos do saque: " << c.retirar(-100) << endl;
	
	
	
	
	
	
	return 0;
}
