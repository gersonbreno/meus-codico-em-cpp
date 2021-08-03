#include <iostream>

using namespace std;

int main()
{
   int num1, num2, resultado;
   char op;
   float div;
   cout << "digite o primeiro numero: ";
   cin >> num1;
   cout << "digite o segundo numero: ";
   cin >> num2;
   cout << "digite a operaçao: ";
   cin >> op;
   switch (op)
   {
   case '+':
   resultado = num1 + num2;
   cout << "soma " << resultado << endl;
     break;
     case '-':
     resultado = num1 + num2;
     cout << "subtraçao " << resultado << endl;
       break;
       case '*':
       resultado = num1 *num2;
       cout << "multiplicaçao " << resultado << endl;
       break;
       case  '/':
       div = (float) num1 / num2;
       cout << "divisao " << div << endl;
       break;
         default :
         cout << "operaçao invalida " << endl;





   }





    return 0;
}
