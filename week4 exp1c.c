#include <stdio.h>
void main()
{
    int A, B, result;
    printf("Enter A and B: ");
    scanf("%d%d", &A, &B);
    result = A + B;
    A++;
    B--;
    printf("Result = %d\n", result);
    printf("A = %d\n", A);
    printf("B = %d", B);
}