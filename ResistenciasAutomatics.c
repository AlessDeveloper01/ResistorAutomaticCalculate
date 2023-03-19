#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    // Crear un arreglo de cadenas que relacione los colores con sus valores numéricos
    char *colores[] = {"negro", "marrón", "rojo", "naranja", "amarillo", "verde", "azul", "violeta", "gris", "blanco"};
    int valores[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Pedir al usuario que introduzca los colores de las bandas
    char banda1[10], banda2[10], banda3[10], tolerancia[10];
    printf("Introduce el color de la primera banda: ");
    scanf("%s", banda1);
    printf("Introduce el color de la segunda banda: ");
    scanf("%s", banda2);
    printf("Introduce el color de la tercera banda: ");
    scanf("%s", banda3);
    printf("Introduce el color de la banda de tolerancia: ");
    scanf("%s", tolerancia);

    // Convertir los colores a valores numéricos
    int valor = (valores[0] * 10 + valores[1]) * pow(10, valores[2]);
    for (int i = 0; i < 10; i++) {
        if (strcmp(banda1, colores[i]) == 0) {
            valor = (valores[i] * 10 + valores[1]) * pow(10, valores[2]);
        }
        if (strcmp(banda2, colores[i]) == 0) {
            valor = (valores[0] * 10 + valores[i]) * pow(10, valores[2]);
        }
        if (strcmp(banda3, colores[i]) == 0) {
            valor = (valores[0] * 10 + valores[1]) * pow(10, valores[i]);
        }
    }

    // Calcular el rango de tolerancia
    char *rango;
    if (strcmp(tolerancia, "marrón") == 0) {
        rango = "±1%";
    } else if (strcmp(tolerancia, "rojo") == 0) {
        rango = "±2%";
    } else if (strcmp(tolerancia, "verde") == 0) {
        rango = "±0.5%";
    } else if (strcmp(tolerancia, "azul") == 0) {
        rango = "±0.25%";
    } else if (strcmp(tolerancia, "violeta") == 0) {
        rango = "±0.1%";
    } else if (strcmp(tolerancia, "gris") == 0) {
        rango = "±0.05%";
    } else if (strcmp(tolerancia, "oro") == 0) {
        rango = "±5%";
    } else if (strcmp(tolerancia, "plata") == 0) {
        rango = "±10%";
    } else {
        rango = "Valor de tolerancia no válido";
    }

    // Imprimir el valor de la resistencia y el rango de tolerancia
    printf("Valor de la resistencia: %d ohms\n", valor);
    printf("Rango de tolerancia: %s\n", rango);
}