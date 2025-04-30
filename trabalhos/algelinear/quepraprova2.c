#include <stdio.h>

int main() { // Desenvolver um código em C ou Phyton para calcular a solução de um sistema linear de três equações e três variáveis, utilizando o método de Cramer.


int determinante(int mat[3][3]){
int det;
    det = mat[0][0] * (mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1])
        - mat[0][1] * (mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0])
        + mat[0][2] * (mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);
    return det;
}

int A[3][3];   
int D, Dx, Dy, Dz, i, j;
int b[3];      
int aux[3][3];

printf("Digite os coeficientes do sistema (Tem que ser 3x3):\n");
for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        printf("[%d][%d]= ", i+1, j+1);
        scanf("%d", &A[i][j]);
    }
}
    
    printf("Digite os termos independentes:\n");
    for(i=0; i<3; i++){
        printf("b[%d]: ", i+1);
        scanf("%d", &b[i]);}

    printf("\n Aqui o sistema de acordo com as dados inseridos:\n");
    for(i=0; i<3; i++) {
        printf("%dx + %dy + %dz = %d\n",
               A[i][0], A[i][1], A[i][2], b[i]);
            }

    D = determinante(A);

    if (D == 0) {
        printf("\nO sistema nao tem uma solucao unica(Determinante = 0)\n");
        return 0;
    }

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            aux[i][j] = (j == 0) ? b[i] : A[i][j];
        }
    }
    Dx = determinante(aux);
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            aux[i][j] = (j == 1) ? b[i] : A[i][j];
        }
    }
    Dy = determinante(aux);

    for(i=0; i<3; i++){
        for(j = 0; j<3; j++){
            aux[i][j] = (j == 2) ? b[i] : A[i][j];
        }
    }
    Dz = determinante(aux);

    printf("\nDeterminante D = %d\n", D);
    printf("Determinante x = %d, Determinante y = %d, Determinante z = %d\n", Dx, Dy, Dz);

    float x = (float)Dx / D;
    float y = (float)Dy / D;
    float z = (float)Dz / D;

    printf("\nValores de x, y e z:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    printf("z = %.2f\n", z);

    return 0;
}
