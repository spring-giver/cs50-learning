#include <cs50.h>
#include <stdio.h>

int get_right_int(void);

int main(void)
{
    int num = 0;
    int n = get_right_int();

    int num_25 = n / 25;
    int num_10 = (n - 25 * num_25) / 10;
    int num_5 = (n - 25 * num_25 - 10 * num_10) / 5;
    int num_1 = n - 25 * num_25 - 10 * num_10 - 5 * num_5;

    printf("%i\n", num_1 + num_5 + num_10 + num_25);
}

int get_right_int(void)
{
    int n;
    while (true)
    {
        n = get_int("Change owed:");

        if (n > 0)
        {
            return n;
        }
    }
}
