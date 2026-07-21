#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 0; i < rows; i++)
    {
        // Leading spaces
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        // Print numbers
        for (int k = 1; k <= 2 * (rows - i) - 1; k++)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
