//Luis Felipe Martinez Munevar

#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent) {
    if (exponent == 0) { return 1; } 
    else { return base * power(base, exponent - 1); }
}
int executePO() {
    int base, exponent;
    printf("Ingrese un numero: ");
    scanf("%d", &base);
    printf("Ingrese un exponente: ");
    scanf("%d", &exponent);
    printf("%d elevado a la %d es %d.\n", base, exponent, power(base, exponent));
    return 0;
}