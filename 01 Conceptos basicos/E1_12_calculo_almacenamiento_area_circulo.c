/* programa para calcular el área de un circulo */
/* Compilado en Windows 10  y gcc-10.2.0 */
/* Cap1 Conceptos Básicos , Pagina 19
/* Programacion en C, SCHAUM Byron Gottfried */
/* Programa para calcular áreas de varios círculos, usando un bucle for; no se especifica el numero de circulos */

#include <stdio.h>
#define PI 3.14159
float procesar(float radio); /* Prototipo de Funcion */

/*main()*/
int main(int argc, char const *argv[])

{
    int n, i = 0;      /* Declaración de variables */
    float radio[100],area[100];  /* Declaración de arrays*/
     
    printf("Para PARAR, introducir 0 en el valor del radio\n");
    printf("\nRadio = ? ");
    scanf("%f", &radio[i]);
    while (radio[i]) {
        
        if (radio[i] < 0)
            area[i] = 0;
        else
            area[i] = procesar(radio[i]);

        printf("\nRadio =?");
        scanf("%f", &radio[++i]);
    }
   
    n = --i;  /* El mayor valor de i */
    /* Presentar los elementos del array */
    printf("\nRelación de resultados\n\n");
    for (i = 0; i <=n; ++i)
        printf("Radio = %f Area= %f\n", radio[i], area[i]); 
}

float procesar(float r)  /* Definicion de funcion  */

{
    float a;
    a = PI * r * r;
    return(a);
}