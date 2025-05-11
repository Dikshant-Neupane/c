#include<stdio.h>
int main()
{
    int p, q;
    
    printf("Enter first number: ");
    scanf("%d", &p);
    
    printf("Enter second number: ");
    scanf("%d", &q);
    
    p = p+q;
    q = p-q;
    p = p-q;
    
    printf("After swapping: %d %d\n", p, q);
    
    return 0;
}
