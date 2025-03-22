
#include <stdio.h>
#define LINE 10
#define COLUN 10

int main () {
    
    int buscar[LINE][COLUN];
    int target = 5;
    int found = 0;
    int some;

    for (int i = 0; i < LINE; i++)
    {
    for (int j = 0; j < COLUN;j++){
    }
    
    }
    // buscando condicional

    for (int i = 0; i < LINE; i++)
    {
        for (int j = 0; j < COLUN;j++)
        {
            if (buscar[i][j] = target)
            {
                printf("O valor %d foi encontrado na indice (%d)(%d)", target, i, j);
                found = 1;
                break;
            }
          
            
        }  if (found) break;
    
    }    if (!found) 
    printf ("Elemente %d não encontrado\n", target);
    
    



}