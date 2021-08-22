/* programa para calcular el área de un circulo */
/* Compilado en Windows 10  y gcc-10.2.0 */
/* Cap1 Conceptos Básicos , Pagina 12 
/* Programacion en C, SCHAUM Byron Gottfried */

#include <stdio.h>
#define PI 3.14159


float procesar(float radio); /* Prototipo de Funcion */
/*main()*/
int main(int argc, char const *argv[])

{
     float radio, area; /* Declaración de variables */

    printf("Radio = ? " );
    scanf("%f", &radio );

    if (radio < 0)
        area = 0;
    else
        area = procesar(radio);

    printf("Area = %f", area);
    
}

float procesar(float r)  /* Definicion de funcion  */

{
    float a;
    a = PI * r * r;
    return(a);
}