#include<stdio.h>
int main()

{
    int m, n, A;
    printf("Input m = ");
    scanf_s("%d", &m);
    printf("Input n = ");
    scanf_s("%d", &n);
    if (m > n || n < 0 || m < 0)
    {
        printf("Input m<n, where m and n are natural \n");
        main();
        free();
    }
    for (A = m; n > 0; n--)
    {
        A = A * (m + n);
    }
    printf("Answer = %d", A);
    return 0;
}