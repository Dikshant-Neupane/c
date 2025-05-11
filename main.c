#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    c = a + b;
    
    printf("The sum of numbers is: %d\n", c);
    
    return 0;
}
