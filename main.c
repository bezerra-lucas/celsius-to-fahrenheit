#include <stdio.h>
#include <stdbool.h>

bool is_valid_input(int result)
{
    if (result == 1)
    {
        return true;
    }
    else
    {
        while (getchar() != '\n')
            ; // Clear the input buffer
        return false;
    }
}

int main()
{
    int celsius;
    float fahrenheit;

    printf("-----------------------------------------------\n");
    printf("Hi! This is a celsius to fahrenheit calculator.\n");
    printf("-----------------------------------------------\n");

    do
    {
        printf("Your value in celsius -> ");
    } while (!is_valid_input(scanf("%d", &celsius)));

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("The temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
