#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt the user for input
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Print the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
