#include <iostream>
#include <string.h>
using namespace std;
class LinguagemAmiga;


class Linguagem
{
	friend void ClasseAmiga(Linguagem*);
protected:
	char nome[100];
	LinguagemAmiga* lamiga;
private:
	void mostrarNome()
	{
		cout << "nome: " << nome << endl;
	}


public:

	void setNome(const char* nome)
	{
		strcpy(this->nome, nome);
	}
	void mostrarNome2()
	{
		mostrarNome();
	}
void mostrarAmiga();


};
class LinguagemAmiga{
	friend class Linguagem;
	protected:
		void mostrarLinguagemAmiga(){
			cout << "ola linguegem amiga \n";
		}
};

void ClasseAmiga(Linguagem* l)
{
	   cout << "classe amiga diz "<< l->nome << endl;	
}
void Linguagem::mostrarAmiga()
{
	lamiga->mostrarLinguagemAmiga();
}
int main(int argc, char *argv[])
{

	Linguagem l;

	

	l.setNome("java");
	//l.mostrarNome2();
    //ClasseAmiga(&l);
   l.mostrarAmiga();
	return 0;
}
