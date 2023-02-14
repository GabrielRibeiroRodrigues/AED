#include <iostream>
using namespace std;
int main() {
   int num1, num2,num3;
   

   printf("Digite o primeiro numero :");
   scanf("%d",&num1);
  printf("Digite o segundo numero :");
   scanf("%d",&num2);
    printf("Digite o terceiro numero :");
  scanf("%d",&num3);
if(num1 > num2){
    if(num1 > num3){
        cout << "O Maior numero é " << num1 ;
    }
    else{
        cout << "O Maior numero é " << num3 ;
    }
}
else{
    if(num2 > num3){
        cout << "O Maior numero é " << num2 ;
    }
    else{
        cout << "O Maior numero é " << num3 ;}
}}



