/* 5- Fazer um programa em "C" que solicite 2 números e informe...: */

#include <stdio.h>
#include <math.h>
int main() {
    
    int num;
    int num2;
    
    //digitar dois números
    printf("Digite um número: \n");
    scanf("%d", &num);
    printf("Digite outro número: \n", num2);
    scanf("%d", &num2);
    
    // a) a soma dos números
    printf("A soma dos números: %d \n", num + num2);
    
    // b) O produto do primeiro número pelo quadrado do segundo
    printf("O produto do primeiro pelo quadrado do segundo: %d \n", num * (num2 * num2));
    
    // c) O quadrado do primeiro número
    printf("O quadrado do primeiro: %d \n", num * num);
    
    // d) A raiz quadrada da soma dos quadrados
    printf("a raiz quadrada da soma dos quadrados: %f \n", sqrt((num * num) + (num2 * num2)));
    
    // e) O seno da diferênça do primeiro número pelo segundo
    printf("O seno da diferênça do primeiro número pelo segundo: %f \n", sin(num - num2));
    
    // f) O módulo do primeiro número
    if (num < 0.0) {
        printf("O módulo do número é: %f \n", num * -1.0);
    }
    else {
        printf("O módulo do número é: %d \n", num);
    }
    
    return 0;
}

