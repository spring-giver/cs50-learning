#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int n;
    while (true)
    {
        n = get_int("Height:");
        if (n > 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
