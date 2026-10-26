#include <stdio.h>
void main()
{
    int a, b, ch;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice: ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("Result = %d", a + b);
    }
    else if (ch == 2)
    {
        printf("Result = %d", a - b);
    }
    else if (ch == 3)
    {
        printf("Result = %d", a * b);
    }
    else if (ch == 4)
    {
        if (b != 0)
            printf("Result = %d", a / b);
        else
            printf("Division by zero is not possible");
    }
    else
    {
        printf("Invalid option");
    }
}
