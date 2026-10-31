#include <stdio.h>

int main(void)
{
    int first, second;

    printf("Enter the first number: ");
    fflush(stdout);

    int first_read = scanf("%d", &first);

    if (first_read != 1)
    {
        printf("Invalid input. Please enter a whole number.\n");
        return 1;
    }

    printf("Enter the second number: ");
    fflush(stdout);

    int second_read = scanf("%d", &second);

    if (second_read != 1)
    {
        printf("Invalid input. Please enter a whole number.\n");
        return 1;
    }

    printf("Sum = %d\n", first + second);

    return 0;
}