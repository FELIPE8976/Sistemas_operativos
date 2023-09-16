#include <stdio.h>
int main(){   
    int i;
    printf("Decimal Hexadecimal Octal\n");
    for(i=1; i<=10; i++){ printf("%d\t%x\t%o\n", i, i, i); }
    return 0;
}