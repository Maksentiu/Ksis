#include <stdio.h>

double absa(double x)
{
    if (x < 0) x = -x;
    else x = x;
}

double sina(double x)
{
    int y = x / 6.2831853072;
    x = x - y * 6.2831853072;
    if (x > 3.1415926536) x = -(x - 3.1415926536);
    double sum = 0, q = x;
    int N = 17, i;
    for (i = 1; i <= N; i += 2)
    {
        sum += q;
        q = -1 * q * x * x / (i + 1) / (i + 2);
    }
    return sum;
}

double cosa(double x)
{
    int y = x / 6.2831853072;
    x = x - y * 6.2831853072;
    if (x > 3.1415926536) x = -x;
    double sum = 0, q = 1;
    int N = 17, i;
    for (i = 0; i <= N; i += 2) 
    {
        sum += q;
        q = -1 * q * x * x / (i + 1) / (i + 2);
    }
    return sum;
}

int main()
{
    double x;

    printf("tg ");
    scanf_s("%lf", &x);


    x = (x * 3.1415926536) / 180;

    if (absa(cosa(x)) < 0.0001)
    {
        printf("Input ctg, that exist!");
    }
    else {
        x = sina(x) / cosa(x);
        printf("tg = %lf", x);
    }

    return 0;
}