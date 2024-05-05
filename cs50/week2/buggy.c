#include <stdio.h>

void print_column(int height);

int main()
{

    printf("Height:");
    int h;
    scanf("%i", &h);
    print_column(h); 

    return 0;
}

void print_column(int height)
{
    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
}