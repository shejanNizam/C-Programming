#include <stdio.h>

int main()
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float sum = 0, avrage;
    int length = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < length; i++)
    {
        sum += ages[i];
    }
    avrage = sum / length;

    printf("Avrage: %f", avrage);

    return 0;
};