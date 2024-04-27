#include <stdio.h>

int main()
{
    char consent;
    printf("Do you agree y/n?");
    scanf("%c", &consent);

    if (consent == 'y' || 'Y')
    {
        printf("Agreed\n");
    }
    
    else if ( consent == 'n' || 'N')
    {
        printf("Not agreed\n");
    }
    return 0;
}

