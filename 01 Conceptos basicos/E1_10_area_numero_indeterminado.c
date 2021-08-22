/* programa para calcular el área de un circulo */
/* Compilado en Windows 10  y gcc-10.2.0 */
/* Cap1 Conceptos Básicos , Pagina 16
/* Programacion en C, SCHAUM Byron Gottfried */
/* Programa para calcular áreas de varios círculos, usando un bucle for; no se especifica el numero de circulos */

#include <stdio.h>
#define PI 3.14159
float procesar(float radio); /* Prototipo de Funcion */

/*main()*/
int main(int argc, char const *argv[])

{
    float radio, area; /* Declaración de variables */
    int cont;       /* Declaración de variables */ 

    printf("Para PARAR, introducir 0 en el valor del radio\n");
    printf("\nRadio = ?");
    scanf("%f", &radio);
    
    for (cont = 1; radio != 0; ++cont){
        
        if (radio < 0)
        area = 0;
        else
        area = procesar(radio);

    printf("Area = %f", area);
    printf("\nRadio =?");
    scanf("%f", &radio);
    }
   
}

float procesar(float r)  /* Definicion de funcion  */

{
    float a;
    a = PI * r * r;
    return(a);
}
