#include <stdio.h>

int main (){

int x;
int y;

printf("Rows: ");
scanf("%i", &x);

printf("Columns: ");
scanf("%i", &y);


for (int i = 0; i < x; i++)    // outer loop (rows)
{
    for (int j = 0; j<y; j++) // inner loop (column)
    {
        printf("#");
    }
    printf("\n");
}
    return 0;
}
