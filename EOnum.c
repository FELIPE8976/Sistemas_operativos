// Luis Felipe Martinez Munevar

#include <stdio.h>
#include <stdlib.h>

int EO() {
    int number;
    printf("Ingrese un número: ");
    scanf("%d", &number);
    if (number % 2 == 0) { printf("%d es un numero par.\n", number); }       else { printf("%d es un numero impar.\n", number); }
    return 0;
}