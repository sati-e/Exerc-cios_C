/* 3- Fazer um programa que solicita um n�mero decimal e imprime o correspondente em hexa e octa */

#include <stdio.h>
#include <math.h>

int main() {
    
    int num;
    printf("Digite um n�mero decimal: \n");
    scanf("%d", &num);
    
    printf("N�mero em hexa: %x \n", num);
    printf("Numero em octal: %o \n", num);
    
}
