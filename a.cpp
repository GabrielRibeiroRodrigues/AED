#include <iostream>
using namespace std;

int main() {
   double num1, num2, resultado;
   char operacao;

   printf("Digite o primeiro numero :");
   cin >> num1;
  printf("Digite o segundo numero :");
   cin >> num2;
   printf("Digite a operacao: + - / * ");
   cin >> operacao;

   switch (operacao) {
      case '+':
         resultado = num1 + num2;
         break;
      case '-':
         resultado = num1 - num2;
         break;
      case '*':
         resultado = num1 * num2;
         break;
      case '/':
         resultado = num1 / num2;
         break;
   }
   cout << "Resultado: " << resultado << endl;   
}
