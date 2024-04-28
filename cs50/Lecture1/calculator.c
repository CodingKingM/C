#include <stdio.h>
int add(int a, int b);
int main()
{
    int x;
    int y;
    printf("What is the value of x?\n");
    scanf("%i", &x);
    printf("What is the value of y?\n");
    scanf("%i", &y);
    

    // int z = add(x, y);
    printf("= %i", add(x, y));
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
