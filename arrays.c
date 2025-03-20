#include <stdio.h>
int main ()   {

int index;

//matriz char
char * nome [3] [3] = {
    //tabela de matrizes 3x3,iniciando do 0,1 e 2.
{"Aluno 0", "NOTA:3", "NOTA:7"},
{"aluno 1", "Nota: 5", "Nota:4"},
{"Aluno 2", "Nota 8", "Nota 6"}

};
//entrada de dados
printf("Digite o numero do aluno: \n Aluno 0 = 0 \n Aluno 1 = 1 \n Aluno 2 = 2 \n");
scanf("%d", &index);

//impressão dos dados informados pelo usuario.
//o char nome entre cochetes chamando o "index" primeiro representa que esta chamando a linha inteira.
//Ja o cochete ao lado do atributo index,é o indice que indica qual linha você quer imprimir
printf("A nota do %s é: \n  %s \n %s \n", nome[index] [0],nome[index] [1],nome[index] [2] );


 }