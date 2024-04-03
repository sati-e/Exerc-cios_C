/* 4 - Fazer um programa em "C" que pergunte um valor em graus Fahrenheir e imprime no 
vídeo o correspondente em graus Celsius usando as fórmulas que seguem */

/* A) Usar uma variável double para ler o valor em Fahrenheit e a fórmula C=(f-32.0)*(5.0/9.0). */

#include <stdio.h>

int main () {
    double F;
    double C;
    printf("Digite um valor em Fahrenheit: \n");
    scanf("%lf", &F);
    printf("Em Celcius : %lf \n", (F - 32.0) * (5.0 / 9.0));
    return 0;
    
}

