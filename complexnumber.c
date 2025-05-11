#include <stdio.h>

int main() {
    float r, i;
    
    printf("Enter coefficients of the complex number (real and imaginary parts): ");
    scanf("%f %f", &r, &i);
    
    printf("The entered number is: %.2f + %.2fi\n", r, i);
    
    return 0;
}
