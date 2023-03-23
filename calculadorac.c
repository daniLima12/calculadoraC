#include <stdio.h>
#include <math.h>

int main(){
    int tipoDeOperacao = 0;
    float num1 = 0, num2 = 0;
    
    printf("\nDigite qual operação deseja realizar: ");
    printf("\n 1 - Soma\t 2 - Subtração\t 3 - Multiplicação\t 4 - Divisão\n\t>>>");
    scanf("%d", &tipoDeOperacao);

    switch (tipoDeOperacao){
    case 1:
        printf("\nDigite dois números para realizar a soma: ");
        scanf("%f %f", &num1, &num2);
        printf("\nO resultado da conta é: %.2f", num1 + num2);
        break;

    case 2:
        printf("\nDigite dois números para realizar a subtração: ");
        scanf("%f %f", &num1, &num2);
        printf("\nO resultado da conta é: %.2f", num1 - num2);
        break;
    
    case 3:
        printf("\nDigite dois números para realizar a multiplicação: ");
        scanf("%f %f", &num1, &num2);
        printf("\nO resultado da conta é: %.2f", num1 * num2);
        break;

    case 4:
        printf("\nDigite dois números para realizar a divisão: ");
        scanf("%f %f", &num1, &num2);
        printf("\nO resultado da conta é: %.2f", num1 / num2);
        break;

    
    default:
        printf("\nOpção inválida!!");
        break;
    }

    return 0;
}