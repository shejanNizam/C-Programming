#include <stdio.h>

int main()
{
    // Q1 --> solve
    /*
        int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

        float sum = 0, avrage;
        int length = sizeof(ages) / sizeof(ages[0]);

        for (int i = 0; i < length; i++)
        {
            sum += ages[i];
        }
        avrage = sum / length;

        printf("Avrage: %f", avrage);
    */

    // Q2 --> solve
    int ages[] = {20, 22, 18, 35, 48, 16, 87, 70};

    int length = sizeof(ages) / sizeof(ages[0]);
    int lowestAge = ages[0];

    for (int i = 0; i < length; i++)
    {
        if (lowestAge > ages[i])
        {
            lowestAge = ages[i];
        }
    }
    printf("\n Lowest Age is: %d \n", lowestAge);

    return 0;
};