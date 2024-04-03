/* 3- Fazer um programa que solicita um número decimal e imprime o correspondente em hexa e octa */

#include <stdio.h>
#include <math.h>

int main() {
    
    int num;
    printf("Digite um número decimal: \n");
    scanf("%d", &num);
    
    printf("Número em hexa: %x \n", num);
    printf("Numero em octal: %o \n", num);
    
}
