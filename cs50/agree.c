#include <stdio.h>

int main()
{

    char consent;

    printf("Do you agree y/n?");
    scanf("%c", &consent);

    if (consent == 'y')
    {
        printf("Agreed\n");
    }
    else if (consent == 'Y')
    {
        printf("Agreed\n");
    }
    else if (consent == 'N')
    {
        printf("Not agreed");
    }
    else
    {
        printf("Not agreed\n");
    }
    return 0;
}