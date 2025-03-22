#include <stdio.h>

#define linhas 8
#define coluna 8

int main () {

    int matriz[linhas][coluna];
    int soma = 0;

    for (int i =0; i < linhas; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            soma++;
            matriz[i][j] = soma;
            printf("%d ", soma);
        }
        printf("\n");
    }
    


}