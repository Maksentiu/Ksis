#include <stdio.h>

int main()
{
    double a, b, c;
    printf("Input radius = ");
    scanf_s("%lf", &a);
    printf("Input sides of the rectangle = ");
    scanf_s("%lf %lf", &b, &c);
    if (a <= 0 || b <= 0 || c <= 0) 
    {
        printf("Reload the program and input numbers that > 0 "); 
        return 0;
    }
    a = a * 2;
    if (b < c && a <= b) printf("The ball will go into the hole");
    else if (c < b && a <= c) printf("The ball will go into the hole");
    else printf("The ball will not go into the hole");
    return 0;
}