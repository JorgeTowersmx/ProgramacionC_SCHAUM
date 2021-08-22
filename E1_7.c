/* programa para calcular el área de un circulo */
/* Compilado en Windows 10  y gcc-10.2.0 */
/* Cap1 Conceptos Básicos , Pagina 12 
/* Programacion en C, SCHAUM Byron Gottfried */

#include <stdio.h>
/* main() */
int main(int argc, char const *argv[])
{
     float radio, area;

    printf("Radio = ? " );
    scanf("%f", &radio );
    area = 3.14159 * radio * radio;
    printf("Area = %f", area);
    
}
