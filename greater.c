// Luis Felipe Martinez Munevar

#include <stdio.h>
#include <stdlib.h>

int great() {
    int num1, num2, num3;
    printf("ingrese 3 numeros separados por espacio: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3) {
        printf("%d es el nuemro mas grande.\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d es el numero mayor.\n", num2);
    } else {
        printf("%d es el numero mas grande.\n", num3);
    }
    return 0;
}