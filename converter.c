/* 1- Fazer um programa em C que pergunta um valor 
em metros e imprime o correspondente
em dec�metros, cent�metros e mil�metros */

int main () {

    int distancia;
    
    //pergunta o valor da dist�ncia
    printf ("Digite uma dist�ncia em metros: \n"); 
    scanf("%i", &distancia);
    //calcula o valor em dec�metros, cent�metros e mil�metros
    printf ("O n�mero em dec�metros: %i \n", distancia * 10);
    printf("O n�mero em cent�metros �: %i \n", distancia * 100);
    printf ("O n�mero em mil�metros �: %i \n", distancia * 1000);
    return 0;   
} 
