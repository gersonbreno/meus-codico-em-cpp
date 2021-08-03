#include <iostream>
using namespace std;

class ClasseMae
{

public:
	virtual void mostraMensagem()
	{
		cout <<"ola, sou a classe mae"<< endl;
	}
	
	
	
		
};
void foo(ClasseMae* p)
{
	p->mostraMensagem();
}

class  ClasseFilha : public ClasseMae
{
public:
virtual	void mostraMensagem()
	{
		cout << "ola sou a classe filhar"<< endl;
	}
	
	
};

int main(int argc, char *argv[])
{
	ClasseMae mae;
	ClasseFilha filha;
	
foo(&mae);
foo(&filha);
	
	return 0;
}