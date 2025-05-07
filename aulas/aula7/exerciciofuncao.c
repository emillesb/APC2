#include <stdio.h>
/*
void linha3x (){
for (int i = 1; i<= 3; i++){
printf("*");

printf("/n");
} 

}
void linha5x (){
    for (int i = 1; i<= 5; i++){
    printf("*");
    
    printf("/n");
    } 
    
    }

    void linha7x (){
        for (int i = 1; i<= 7; i++){
        printf("*");
        
        printf("/n");
        } 
        
        }
int main(){
    

    return 0;
}*/


/*
void f1(){
    printf("*");

}
void f2(){
    printf("*");
}
void f3(){
    printf("*");
}

int main(){
    f1();
    f2();
    f3();
    f2();
    f1();
    return 0;
} */


void modificar (int n ){
    n = 5;
    int *p = n;
    
}
    
int main() {

int n = 3;
int *p = &n;
modificar (n);


printf("Valor de n: %d\n", n);



}