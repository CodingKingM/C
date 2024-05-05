#include <stdio.h>
const int N = 3; // global constant
int main()
{

    int scores[3];

    float average(int length, int array[]);

    for (int i = 0; i < N; i++)
    {
        scores[i];
        printf("score:");
        scanf("%i", &scores[i]);
    }

    printf("Average %f", average(N, scores));
    return 0;
}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int i= 0; i < length; i++)
    {
        sum += array[1];
    }
    return sum / (float)length;
}

