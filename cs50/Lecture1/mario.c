#include <stdio.h>

int main()
{

    printf("Enter the size of the column:");
    int column;
    scanf("%i", &column);
    printf("Enter the size of the row:");
    int row;
    scanf("%i", &row);

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

