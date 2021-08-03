#include <iostream>

using namespace std;
void menu()
{
	cout << "escolha uma das seguinte opecoes: \n";
	cout << "1 - soma \n";
	cout << "2 - substracao \n";
	cout << "3 - multiplicar \n";
	cout << "4 - divisao \n";
	cout << "0 - sair \n";
}

int main(int argc, char** argv)
{





	float div;
	int num1, num2, resultado;
	int op;


	
	do
	{
	menu();
	cin >> op;

		switch(op)
		{
		case 1:
		cout << "digite o primeiro valor: ";
		cin >> num1;
		cout << "digite o segundo  valor: " ;
		cin >> num2;
			resultado = num1 + num2;
			cout << "A SUA SOMA FOI: " << resultado << endl;
			break;
		case 2:
			cout << "digite o primeiro valor: ";
		cin >> num1;
		cout << "digite o segundo  valor: " ;
		cin >> num2;
			resultado = num1 - num2;
			cout << "A SUA SUBTRAÇAO FOI: " << resultado << endl;
			break;
		case 3:
			cout << "digite o primeiro valor: ";
		cin >> num1;
		cout << "digite o segundo  valor: " ;
		cin >> num2;
			resultado = num1 * num2;
			cout << "A SUA MULTIPLICAÇAO FOI: " << resultado << endl;
			break;
		case 4:
			cout << "digite o primeiro valor: ";
		cin >> num1;
		cout << "digite o segundo  valor: " ;
		cin >> num2;
			div = (float) num1 / num2;
			cout << "A SUA DIVISAO FOI:  " << div << endl;
			break;
		case 0:
			cout << "saindo...." << endl;;
			break;
		default:
			cout << "operação invalida " << endl;
			break;
		}
	}
	while(op != 0);

	return 0;
}
