#include <stdio.h>
int add(int a, int b);
int main()
{

    int x;
    int y;

    printf("value of x:\n");
    scanf("%i", &x);
    printf("Value of y:\n");
    scanf("%i", &y);

    printf("The sum of and x and y is %i", add(x, y));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}