#include <stdio.h>

int main(void){
    
int n1 = 3;
int n2 = 5;
int *p1;
int *p2;

printf("n1 = %d, n2= %d\n", n1, n2);

p1 = &n1;
p2 = &n2;

*p1 = 5;
*p2 = 3;

printf("n1 = %d, n2= %d\n", n1, n2);

    return 0;
}
