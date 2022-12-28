#include <stdio.h>

unsigned int calcFactorial(unsigned int n)
{
    return n == 0 ? 1 : n * calcFactorial(n - 1);
}

int main(void)
{
    unsigned int input = 0, answer = 0;

    printf("Enter number: ");
    scanf("%u", &input);

    answer = calcFactorial(input);

    printf("The factorial of %u is %u.\n", input, answer);
}

