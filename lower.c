// Luis Felipe Martinez Munevar

#include <stdio.h>

int lower() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c ", &ch);
    if (ch >= 'a' && ch <= 'z') {
        printf("%c es una letra minuscula.\n", ch);
    } 
    else { printf("%c NO es una letra minuscula.\n", ch); }
    return 0;
}