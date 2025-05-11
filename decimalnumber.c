#include <stdio.h>

int main() {
    float dec;
    
    printf("Enter a decimal number: ");
    scanf("%f", &dec);

    // Convert float to int before printing as hexadecimal and octal
    int int_dec = (int)dec;  

    printf("Hexadecimal equivalent = %x\n", int_dec);
    printf("Octal equivalent = %o\n", int_dec);

    return 0;
}
