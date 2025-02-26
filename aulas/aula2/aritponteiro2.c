#include <stdio.h>

int main(){
    
    int n = 1025;
    char *pc;
    pc =(char *)&n;  //(char *) elimina o warning
    //printf("*pc: %d, pc[0]: %d\n", *pc, pc[0]); // que eh a mesma coisa que
    printf("*pc: %d, pc[0]: %d\n", *pc, pc[0]);


   // printf("pc:%d\n", *pc);
    //pc++; // ou 
    //pc = pc+1;
    //printf("pc:%d\n", *pc);

    return 0;
}
