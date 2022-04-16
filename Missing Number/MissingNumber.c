#include <stdio.h>

int main()
{

    // Configure
    int n = 0;
    printf("Enter your number : ");
    scanf("%d", &n);
    int numbers[n - 1];

    // Get number from user
    for (int i = 0; i < n - 1; i++)
    {
        printf("Enter number%d : ", (i + 1));
        scanf("%d", &numbers[i]);
    }

    // Sort numbers list
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (numbers[j] > numbers[i])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    //Find missing number and print result
    for (int i = 1; i <= n; i++)
    {
        int check = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (i == numbers[j])
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
            printf("Your missing number is : %d", i);
    }
}