/* 1- Fazer um programa em C que pergunta um valor 
em metros e imprime o correspondente
em decímetros, centímetros e milímetros */

int main () {

    int distancia;
    
    //pergunta o valor da distância
    printf ("Digite uma distância em metros: \n"); 
    scanf("%i", &distancia);
    //calcula o valor em decímetros, centímetros e milímetros
    printf ("O número em decímetros: %i \n", distancia * 10);
    printf("O número em centímetros é: %i \n", distancia * 100);
    printf ("O número em milímetros é: %i \n", distancia * 1000);
    return 0;   
} 
