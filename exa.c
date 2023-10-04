#include <stdio.h>
/*
+Solicita al usuario que ingrese un número entero positivo "n" que representa el rango.
+El programa buscará números perfectos en el rango de 1 a "n".
+Valida que "n" sea un número entero positivo.
+Si encuentras un número perfecto, muestra ese número y sus divisores propios positivos.
+Después de encontrar todos los números perfectos en el rango, pregunta al usuario si desea buscar números perfectos en otro rango. Si la respuesta es afirmativa, el programa debe repetirse; de lo contrario, debe finalizar.
*/
int main()
{
    int n, i, j,l, acu;
    printf("Ingrese un numero entero positivo para el rango\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        acu = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                acu = acu + j;
            }
        }
        if (acu == i)
        {
            printf("Es numero perfecto %d==", i);
            for(l=1;l<i;l++)
            {
                if(i%l==0)
                printf("%d ",l);
            }
            printf("\n");
            printf("=========================\n");
        }
    }
}