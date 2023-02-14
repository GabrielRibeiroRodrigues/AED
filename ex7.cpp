#include <iostream>
using namespace std;

int main() {
    int dist, comp, pontoGarrafa ;

   printf("Digite a distancia que Leonardo vai correr: ");
   scanf("%d",&dist);
   printf("Digite o comprimento da Pista: ");
  scanf("%d",&comp);
   
  pontoGarrafa = ( dist - comp * (dist / comp)) ;
   printf("O ponto eh ""%d\n", pontoGarrafa);
}