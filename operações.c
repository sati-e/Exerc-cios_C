/* 5- Fazer um programa em "C" que solicite 2 n�meros e informe...: */

#include <stdio.h>
#include <math.h>
int main() {
    
    int num;
    int num2;
    
    //digitar dois n�meros
    printf("Digite um n�mero: \n");
    scanf("%d", &num);
    printf("Digite outro n�mero: \n", num2);
    scanf("%d", &num2);
    
    // a) a soma dos n�meros
    printf("A soma dos n�meros: %d \n", num + num2);
    
    // b) O produto do primeiro n�mero pelo quadrado do segundo
    printf("O produto do primeiro pelo quadrado do segundo: %d \n", num * (num2 * num2));
    
    // c) O quadrado do primeiro n�mero
    printf("O quadrado do primeiro: %d \n", num * num);
    
    // d) A raiz quadrada da soma dos quadrados
    printf("a raiz quadrada da soma dos quadrados: %f \n", sqrt((num * num) + (num2 * num2)));
    
    // e) O seno da difer�n�a do primeiro n�mero pelo segundo
    printf("O seno da difer�n�a do primeiro n�mero pelo segundo: %f \n", sin(num - num2));
    
    // f) O m�dulo do primeiro n�mero
    if (num < 0.0) {
        printf("O m�dulo do n�mero �: %f \n", num * -1.0);
    }
    else {
        printf("O m�dulo do n�mero �: %d \n", num);
    }
    
    return 0;
}

