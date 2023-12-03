#include <stdio.h>

int main()
{
    int i;
    int fact = 1;
    int num;
    printf("Enter a number to find Factorial: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of the number is: %d", fact);
    return 0;
}
