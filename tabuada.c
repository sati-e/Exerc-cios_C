/* 2- Fazer um programa em C que imprime uma tabela com a tabuada de 1 ao 9 */

int main () {
        
    int num;
    int mult;
    printf ("Digite o número da tabuada: \n"); 
    scanf("%d", &num);
    for (mult = 1; mult < 10; mult++) {
    printf("%d x %d = %d\n", num, mult, (num * mult));
    }
    
    return 0;
}

