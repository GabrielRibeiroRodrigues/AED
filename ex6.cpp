#include <iostream>
using namespace std;

int main() {
    int comprimentoEstrada, distanciaPedagios, custoKM, valorPedagio,custoViagem ;

   printf("Digite o comprimento da Estrada: ");
   scanf("%d",&comprimentoEstrada);
    printf("Digite a distancia do pedagios: ");
   scanf("%d",&distanciaPedagios);
   printf("Digite o custo por km percorrido: ");
   scanf("%d",&custoKM);
   printf("Digite o valor do pedagio : ");
  scanf("%d",&valorPedagio);

  custoViagem = ((comprimentoEstrada/distanciaPedagios)*valorPedagio) + (custoKM * comprimentoEstrada);
 

   printf("%d\n", custoViagem);
}