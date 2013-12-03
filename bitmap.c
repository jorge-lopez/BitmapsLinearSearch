#include <stdio.h>
#include <stdlib.h>


int main()
{
    char arreglo [8]={'j',0,'r','g','3',0,0,0};
    int bitmap = 0b00000000;  
    

	printf("\n Asi se ve un bitmap vacio: %c", bitmap);
	printf("\nAhora utilizaremos este arreglo para actualizar el bitmap\nArreglo: %s", &arreglo[0]);

	int i;
    for(i = 0; i < 8; i++)
    {
        if(arreglo[i] != 0)
        {
            bitmap |= (1<<i);
        }
    }

    printf("\nBitmap diferente a vacio: %c",bitmap);
	printf("\nDonde hay memoria libre?");

    for(i = 0; i < 8; i++)
    {
        if((bitmap & 0b00000001)==0b00000000)
        {
           printf("\nMemoria libre en posicion %d",i+1);
        }
        bitmap>>=1;
    }
}
