#include <stdio.h>

int main(){
    //Configure
    const double PI = 3.141592653589793;
    double r = 0, area = 0;

    //Get r value
    printf("Enter r : ");
    scanf("%lf", &r);

    //Calculate circle area
    area = (r*r) * PI;

    //Print result
    printf("\nyour area is : %lf", area);
}