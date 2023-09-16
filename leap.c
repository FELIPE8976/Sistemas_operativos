// Luis Felipe Martinez Munevar

#include <stdio.h>
#include <stdlib.h>

int leap() {
    int year;
    printf("Ingrese el año a evaluar: ");
    scanf("%d", &year);
    if (year % 400 == 0) { printf("%d es un año bisiesto.\n", year);}
    else if (year % 100 == 0) {
        printf("%d NO es un año bisiesto.\n", year);
    }
    else if (year % 4 == 0) { printf("%d es un año bisiesto.\n", year); }
    else { printf("%d NO es un año bisiesto.\n", year); }
    return 0;
}