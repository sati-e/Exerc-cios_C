/* B) Usar uma variável int para ler o valor em Fahrenheit e a fórmula C=(f-32)*(5/9). */

#include <stdio.h>

int main() {
    
    int F;
    float C;
    printf("Digite um valor em fahrenheit: \n");
    scanf ("%d", &F);
    C = (F - 32.0) * (5.0 / 9.0);
    printf("Em Celsius: %.2f \n", C); 
    
    return 0;
}
 
