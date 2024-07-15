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
    /*
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
    */

    // Q3 --> solve
    /*
        float price[3];

        printf("Enter price of 3: ");
        scanf("%f %f %f", &price[0], &price[1], &price[2]);

        printf("\nTotal price 1: %.2f, \nTotal price 2: %.2f, \nTotal price 3: %.2f",
               price[0] + (price[0] * 0.18),
               price[1] + (price[1] * 0.18),
               price[2] + (price[2] * 0.18));
    */

    // Q3 --> solve == using for loop
    /*
       float price[3];
       float totalPrice = 0;

       printf("Enter price of 3: ");
       int length = sizeof(price) / sizeof(price[0]);

       for (int i = 0; i < length; i++)
       {
           scanf("%f", &price[i]);
       }

       for (int i = 0; i < length; i++)
       {
           totalPrice = price[i] + (price[i] * 0.18);
           printf("\n Total price %d: %f", i + 1, totalPrice);
       }
    */

    // Q4 --> solve
    /*
        int n, i;

        printf("Enter array size: ");
        scanf("%d", &n);

        int array[n];

        printf("Enter %d elements of array: ", n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("Array element in reverse order: ");
        for (i = n - 1; i >= 0; i--)
        {
            printf("%d ", array[i]);
        }
    */

    return 0;
};