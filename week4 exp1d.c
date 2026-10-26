#include <stdio.h>
void main()
{
    int i, J;
    printf("Enter i: ");
    scanf("%d", &i);
    J = i;
    i++;
    J = J + i;
    i++;
    printf("J = %d\n", J);
    printf("i = %d", i);
}