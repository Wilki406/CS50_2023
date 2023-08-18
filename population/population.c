#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n;
    do
    {
        n = get_int("Starting Integer: ");
    }

    while (n < 9);
    int m;
    do
    {
        m = get_int("Ending Integer: ");
    }

    while (m <= n);
    int y = 0;
    int nborn;
    int ndied;

    while (n < m)
    {
        y++;
        nborn = n / 3;
        ndied = n / 4;
        n = n - ndied + nborn;
    }
    printf("%i years elasped\n", y);
}