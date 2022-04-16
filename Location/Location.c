#include <stdio.h>

int main()
{
    //Configure
    int Xpoints[3];
    int Ypoints[3];

    //Get points from user
    for (int i = 0; i < 3; i++)
    {
        printf("Enter poinit X%d : ", (i + 1));
        scanf("%d", &Xpoints[i]);
        printf("Enter poinit Y%d : ", (i + 1));
        scanf("%d", &Ypoints[i]);
    }

    //calculate and show result
    if (Xpoints[0] == Xpoints[1] && Xpoints[0] == Xpoints[2])
            printf("Dots is set in vertical line");
    else if (Ypoints[0] == Ypoints[1] && Ypoints[0] == Ypoints[2])
            printf("Dots is set in horizontal line");
}