#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("#\n");
//     }
// }

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

// int main(void)
// {
//     const int n = 3;
//     for (int i = 0; i < n; i++)
//     {
//         for (int  j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

// int main(void)
// {
//     int n = get_int("Size: ");

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

// int main(void)
// {
//     int n;
//     do
//     {
//         n = get_int("Size: ");
//     }
//     while (n < 1);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

int get_size(void);
void print_grid(int n);

int main(void)
{
    int n = get_size();
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}