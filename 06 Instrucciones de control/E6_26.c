/* programa para calcular el área de un circulo */
/* Compilado en Windows 10  y gcc-10.2.0 */
/* Cap1 Conceptos Básicos , Pagina 187
/* Programacion en C, SCHAUM Byron Gottfried */
/* Calcular la depreciación utilizando uno de tres métodos diferentes */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, anual, eleccion = 0;
    float val, aux, deprec;

    while (eleccion != 4) {
        /* Leer datos de entrada */
        printf("\nMetodo: (1-LR 2-BDD 3-SDA 4-Fin)");
        scanf("%d", &eleccion);
        if (eleccion >=1 && eleccion <=3){
            printf("Valor original: ");
            scanf("%f", &val);
            printf("Numero de años: ");
            scanf("%d", &n);
        }
        switch (eleccion){
        
        case 1:

            printf("\nMetodo de la linea recta\n\n");
            deprec = val/n;
            for (anual = 1; anual <= n; ++anual) {
                val -= deprec;
                printf("Fin de año %2d", anual);
                printf("    Depreciacion: %7.2f",deprec);
                printf("    Valor actual: %8.2f\n", val);
            }
            break;
        
        case 2:

            printf("\nMetodo de balance doblemente declinante\n\n");
            for (anual = 1; anual <= n; ++anual) {
                deprec = 2*val/n;
                val -= deprec;
                printf("Fin de año %2d", anual);
                printf("    Depreciacion: %7.2f",deprec);
                printf("    Valor actual: %8.2f\n", val);
            }
            break;
        
        case 3:

            printf("\nMetodo de la suma de los digitos\n\n");
            printf("\nde los años\n\n");
            aux = val;
            for (anual = 1; anual <= n; ++anual) {
                deprec = (n-anual+1)*aux / (n*(n+1)/2);
                val -= deprec;
                printf("Fin de año %2d", anual);
                printf("    Depreciacion: %7.2f",deprec);
                printf("    Valor actual: %8.2f\n", val);
            }
            break;
        
        case 4:

            printf("\nHasta luego y que tenga un buen dia\n");
            break;

        default:

         printf("Entrada de datos incorrecta");
         printf("Repite por favor\n");
            /*break;*/
            /* code */
        }
        
    }
/*    return 0;*/
}
