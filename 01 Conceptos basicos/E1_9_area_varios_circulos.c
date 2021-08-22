/* programa para calcular el área de un circulo */
/* Compilado en Windows 10  y gcc-10.2.0 */
/* Cap1 Conceptos Básicos , Pagina 15
/* Programacion en C, SCHAUM Byron Gottfried */
/* Programa para calcular áreas de varios círculos usando un bucle for */
#include <stdio.h>
#define PI 3.14159
float procesar(float radio); /* Prototipo de Funcion */

/*main()*/
int main(int argc, char const *argv[])

{
    float radio, area; /* Declaración de variables */
    int cont, n;       /* Declaración de variables */ 

    printf("Numero de círculos?");
    scanf("%d", &n);
    
    for (cont = 1; cont <=n; ++cont){
        printf("\nCirculo n° %d: Radio = ? ", cont);
        scanf("%f", &radio );

    if (radio < 0)
        area = 0;
    else
        area = procesar(radio);

    printf("Area = %f", area);
    }
   
    
}

float procesar(float r)  /* Definicion de funcion  */

{
    float a;
    a = PI * r * r;
    return(a);
}
