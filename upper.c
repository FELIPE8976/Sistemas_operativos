// Luis Felipe Martinez Munevar

#include <stdio.h>

int upper() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c ", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c es una letra mayuscula.\n", ch);
    } 
    else { printf("%c NO es una letra mayuscula.\n", ch); }
    return 0;
}