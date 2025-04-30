#include <stdio.h>
#define lim 3

//Desenvolver um código em C ou Phyton para calcular o determinante de matrizes 2x2 e 3x3 utilizando o método de Laplace.

int main() {

void cofator(int mat[lim][lim], int aux[lim][lim], int ahnil, int c, int tam){ //aux eh uma matriz de auxilio, ahnil eh a linha que tira pra submatriz, c eh a coluna e tam o tamanho
    int i = 0, j = 0;

    for (int linha = 0; linha< tam; linha++){
        for (int coluna= 0; coluna <tam; coluna++){
         if (linha !=ahnil && coluna != c){
            aux[i][j++] = mat[linha][coluna];
                if (j == tam -1){
                    j = 0;
                    i++;
} } } } } 

int detmat(int mat[lim][lim], int tam){
    int D =0; 
    if (tam == 1)
     return mat[0][0];

    int aux[lim][lim]; 
    int sinal = 1;

    for (int f =0; f < tam; f++){
        cofator(mat, aux, 0, f, tam);
        D += sinal * mat[0][f] * detmat(aux, tam -1);
        sinal = -sinal;
    }

return D;
}
    int tam;
    int mat[lim][lim];

    printf("A matriz vai ser 2x2 ou 3x3(Digite 2 ou 3)? ");
    scanf("%d", &tam);

    if (tam < 2 || tam > 3) {
        printf("Digite apenas uma das possibilidades dadas por favor!\n");
    return 1;
    }

    printf("Coloque os elementos da matriz %dx%d:\n", tam, tam);
    for (int i = 0; i< tam; i++){
        for (int j = 0;j < tam; j++) {
        printf("[%d][%d]= ", i, j);
        scanf("%d", &mat[i][j]);
        } }

    printf("\nMatriz inserida:\n");
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    int det = detmat(mat, tam);
    printf("\nDeterminante da matriz= %d\n", det);

    return 0;
}
