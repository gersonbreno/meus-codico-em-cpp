#include <iostream>
using namespace std;

bool par (int num)  
void mesagem ()
{
	if (num % 2 == 0)
		return true;
	return false;
}

int main(int argc, char *argv[])
{
	int n;
	cout << "digite um numero: ";
	cin >> n;
	if (par(n))
		cout << "o numero "<< n << " eh par " << endl;
	else
	{
			cout << "o numero "<< n << " eh impar " << endl;
	}
	
	
	
	
	
	return 0;
}