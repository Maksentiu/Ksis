#include <stdio.h>
int main()
{
    double a, b, c;
    printf("Input 3 sides of a triangle =");
    scanf_s("%lf %lf %lf", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Reload the program and input numbers that > 0");
        return 0;
    }
    else if (a + b > c && a + c > b && b + c > a)
    {
        printf("Triangle exist");
    }
    else
    {
        printf("Triangle  does not sexist");

    }
    return 0;
}