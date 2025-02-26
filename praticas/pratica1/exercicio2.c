#include <stdio.h>

int main(void){
    
int numero = 7;
int *p;
p = &numero;

    
 
    printf("Insira um valor para o ponteiro p: ");
    scanf("%d", p);
    printf("Valor de numero: %d\n", *p);
    return 0;
}
