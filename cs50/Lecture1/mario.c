#include <stdio.h>

int main()
{
    int column, row;
// prompt user for positive integer
    do
    {
        printf("Enter the size of the column:");
        scanf("%i", &column);
        printf("Enter the size of the row:");
        scanf("%i", &row);
    } while (column < 1 || row < 1);

// print an n-by-n grid of bricks
    for (int i = 0; i < column; i++) // for column
    {
        for (int j = 0; j < row; j++) // for row
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
