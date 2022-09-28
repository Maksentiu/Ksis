#include <stdio.h>
int main()
{
	int n;
	double a, d, S;
	scanf_s("%d %lf %lf", &n, &a, &d);
	if (n <= 0)
	{
		printf("n must be natural");
		return 0;
	}
	else 
	{
		S = ((a + (a + (n - 1) * d)) * n) / 2;
		printf("((a+(a+(n-1)*d))*n)/2= %lf ", S);
		return 0;
	}
}