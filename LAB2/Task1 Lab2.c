#include <stdio.h>

int main() 
{
    int BigC = 160,  SmallC = 130, TrSize = 3000;
    int x, y;
    for (x = 0; x <= (TrSize / SmallC); ++x) 
    {
        y = (TrSize - x * SmallC) % BigC;
        if (!y) 
        {
            printf("Yes. The truck will be full of container\n");
            printf("%d containers by weight %d and %d containers by weight %d \n", x, SmallC, (TrSize - x * SmallC) / BigC, BigC);
            return 0;
        }
    }
    printf("No. You can't load truck with these containers.\n");
    return 0;
}
