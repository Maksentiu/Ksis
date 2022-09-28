#include<stdio.h>
int main()
{
    int  i;
    printf(" Choose : \n 1.Belarus \n 2.Russia \n 3.Egypt \n 4.Canada \n 5.Australia \n 6.USA \n 7.England \n");
    scanf_s("%d", &i);
    printf("Capital : ");
    switch (i)
    {
    case 1:
        printf("Minsk");
        break;
    case 2:
        printf("Moskow");
        break;
    case 3:
        printf("Cairo");
        break;
    case 4:
        printf("Ottawa");
        break;
    case 5:
        printf("Canberra");
        break;
    case 6:
        printf("Washington");
        break;
    case 7:
        printf("London");
        break;
    default:
        printf("Not on the list");
        break;
    }
    return 0;
}