#include <iostream>

using namespace std;
int soma (int n1, int n2){
	return n1 + n2;
}
int soma (int n1, int n2, int n3){
	return n1 + n2 + n3;
}


int main(int argc, char** argv)
{
    cout << soma (11,232) << endl;
     cout << soma (34,10,3) << endl;
	return 0;
}