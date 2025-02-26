#include <stdio.h>

int main(void){
    

    
    int i = 5;
    int *p;
    
    p = &i;
    
    printf("&p: %p\n", &p);
    printf("p (&i - o endereco de i): %p\n", p);
    printf("*p (i - o valor de i): %d\n", *p);
    printf("Insira um valor para o ponteiro p: ");
    scanf("%d", p); 
    printf("p (&i - o endereco de i): %p\n", p);
    printf("*p (i - o valor de i): %d\n", *p);

    *p= 7;
    printf("p (&i - o endereco de i): %p\n", p);
    printf("*p (i - o valor de i): %d\n", *p);

    return 0;
}
