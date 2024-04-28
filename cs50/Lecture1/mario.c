#include <stdio.h>

int main (){
int n;
//prompt user for positive integer
do 
{
    printf("Size:");
    scanf("%i", &n);
}
while (n < 1);

// print an n-by-n grid of bricks
for (int i = 0; i<n; i++)
{
    for (int j = 0; j<n; j++)
    {
        printf("#");
    }
    printf("\n");
}


    return 0;
}