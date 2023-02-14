#include <iostream>
using namespace std;

int main() {
    string nome ;
   double  salario,vendas,resultado;

   printf("Digite o nome: ");
   scanf("%lf",&nome);
    printf("Digite o salario: ");
   scanf("%lf",&salario);
   printf("Digite o numero de vendas: ");
   scanf("%lf",&vendas);

  resultado = salario + (15 * (vendas/100)) ;
   printf("%lf\n", nome);

    printf("%lf\n", resultado); 
}