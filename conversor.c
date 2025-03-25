#include <stdio.h>

int main() {
    float cantidad, resultado;
    int opcion_origen, opcion_destino;

    printf("Conversor de Monedas\n");
    printf("1. Quetzales\n");
    printf("2. Dolares\n");
    printf("3. Euros\n");

    printf("Seleccione la moneda de origen: ");
    scanf("%d", &opcion_origen);

    printf("Seleccione la moneda de destino: ");
    scanf("%d", &opcion_destino);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    // Tasas de cambio (valores aproximados)
    float quetzal_a_dolar = 0.13;
    float quetzal_a_euro = 0.12;
    float dolar_a_quetzal = 7.75;
    float dolar_a_euro = 0.92;
    float euro_a_quetzal = 8.42;
    float euro_a_dolar = 1.09;

    if (opcion_origen == 1) { // Quetzales
        if (opcion_destino == 2) { // Dólares
            resultado = cantidad * quetzal_a_dolar;
            printf("%.2f Quetzales = %.2f Dólares\n", cantidad, resultado);
        } else if (opcion_destino == 3) { // Euros
            resultado = cantidad * quetzal_a_euro;
            printf("%.2f Quetzales = %.2f Euros\n", cantidad, resultado);
        } else {
            printf("Moneda de destino no válida.\n");
        }
    } else if (opcion_origen == 2) { // Dólares
        if (opcion_destino == 1) { // Quetzales
            resultado = cantidad * dolar_a_quetzal;
            printf("%.2f Dólares = %.2f Quetzales\n", cantidad, resultado);
        } else if (opcion_destino == 3) { // Euros
            resultado = cantidad * dolar_a_euro;
            printf("%.2f Dólares = %.2f Euros\n", cantidad, resultado);
        } else {
            printf("Moneda de destino no válida.\n");
        }
    } else if (opcion_origen == 3) { // Euros
        if (opcion_destino == 1) { // Quetzales
            resultado = cantidad * euro_a_quetzal;
            printf("%.2f Euros = %.2f Quetzales\n", cantidad, resultado);
        } else if (opcion_destino == 2) { // Dólares
            resultado = cantidad * euro_a_dolar;
            printf("%.2f Euros = %.2f Dólares\n", cantidad, resultado);
        } else {
            printf("Moneda de destino no válida.\n");
        }
    } else {
        printf("Moneda de origen no válida.\n");
    }

    return 0;
}