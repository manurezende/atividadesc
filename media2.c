#include <stdio.h>
int main(void)
{    int contador;                           // vai contar quantas notas foram digitadas//
     int total;                              // a soma de todas as notas//
     int nota;                               //vai ser o valor das notas//

     float media;                            /* número em ponto flutuante para a média */
 
     total = 0;
     contador = 0;

     printf( "Digite a nota, -1 no fim:" );
     scanf( "%d", &nota );
     
     while ( nota != -1 ) 
     {
        total = total + nota;
        contador = contador + 1;

        printf( "Digite a nota, -1 para finalizar: " );
        scanf("%d", &nota);
     }
     if ( contador != 0 )
     {
         media = ( float ) total / contador;
        printf( "media da turma é %.2f\n", media);
     }
    else
     {
         printf( "Nenhuma nota foi informada\n" );
     }    
         
         return 0;
}
