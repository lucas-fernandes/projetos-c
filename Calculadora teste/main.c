#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main (){
 float primeiro,segundo,soma,subtracao,divisao,multiplicacao,raizq,seno,cosseno,tangente,logaritmo10;
 int op=1,operadores,fat,porcentagem;
 do{
  system("cls");
  printf("Escolha uma operacao:\n1- SOMA\n2- SUBTRACAO\n3- DIVISAO\n4- MULTIPLICACAO\n5- RAIZ QUADRADA\n6- FATORIAL\n7- PORCENTAGEM\n8- SENO\n9- COSSENO\n10- TANGENTE\n11- LOGARITMO BASE 10\n>");
  scanf("%i",&operadores);
  system("cls");
   switch (operadores) {
    case 1:
     printf("SOMA\n");
     printf("Digite um valor: ");
     scanf("%f",&primeiro);
     printf("Digite outro valor: ");
     scanf("%f",&segundo);
     soma=primeiro+segundo;
     printf("O valor da soma e: %.2f\n",soma);
     break;
    case 2:
     printf("SUBTRACAO\n");
     printf("Digite um valor: ");
     scanf("%f",&primeiro);
     printf("Digite outro valor: ");
     scanf("%f",&segundo);
     subtracao=primeiro-segundo;
     printf("O valor da subtracao e: %.2f\n",subtracao);
     break; 
    case 3:
     printf("DIVISAO\n");
     printf("Digite um valor: ");
     scanf("%f",&primeiro);
     printf("Digite outro valor: ");
     scanf("%f",&segundo);
     divisao=primeiro/segundo;
     printf("O valor da divisao e: %.2f\n",divisao);
     break;
    case 4:
     printf("MULTIPLICACAO\n");
     printf("Digite um valor: ");
     scanf("%f",&primeiro);
     printf("Digite outro valor: ");
     scanf("%f",&segundo);
     multiplicacao=primeiro*segundo;
     printf("O valor da divisao e: %.2f\n",multiplicacao);
     break;     
    case 5:
     printf("RAIZ QUADRADA\n");
     printf("Digite o valor: ");
     scanf("%f",&primeiro);
     raizq=sqrt(primeiro);
     printf("O valor da raiz e: %.2f\n",raizq);
     break; 
    case 6: 
     printf("FATORIAL\n");
     printf("Digite o valor: ");
     scanf("%f",&primeiro);
      for(fat=1;primeiro>=1;primeiro--){
       fat*=primeiro; // *= � o mesmo que fat=fat*primeiro 
       }
     printf("O fatorial e: %i\n",fat);
     break;
    case 7:
     printf("PORCENTAGEM\n");
     printf("Digite o percentual: ");
     scanf("%f",&primeiro);
     printf("Digite o valor: ");
     scanf("%f",&segundo);
     porcentagem=(primeiro/100)*segundo;
     printf("O pencentual do valor e: %.2i\n",porcentagem);
     break;
    case 8:
     printf("SENO\n");
     printf("Digite um angulo: ");
     scanf("%f",&primeiro);
     seno=sin(primeiro);
     printf("O seno de %.0f e: %.2f\n",primeiro,seno);
     break;
    case 9:
     printf("COSSENO\n");
     printf("Digite um angulo: ");
     scanf("%f",&primeiro);
     cosseno=cos(primeiro);
     printf("O cosseno de %.0f e: %.2f\n",primeiro,cosseno);
     break;
    case 10: 
     printf("TANGENTE\n");
     printf("Digite um angulo: ");
     scanf("%f",&primeiro);
     tangente=tan(primeiro);
     printf("A tangente de %.0f e: %.2f\n",primeiro,tangente);
     break; 
    case 11:
     printf("LOGARITMO BASE 10\n");
     printf("Digite um angulo: ");
     scanf("%f",&primeiro);
     logaritmo10=log10(primeiro);
     printf("O log de %.0f e: %.2f\n",primeiro,logaritmo10);
     break; 
    default:
     printf("Opcao invalida");
   }system("pause");
  }while(op=1); 
 return(0);
}
