#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("What is the value of x?\n");
    scanf("%i", &x);
    printf("What is the value of y?\n");
    scanf("%i", &y);
    

    
float z = (float) x / (float) y;//type casting
    printf("= %.2f", z);    // %.2f round to 2 signifcant figures
    return 0;
}


 