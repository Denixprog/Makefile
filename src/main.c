#include <stdio.h>
#include "def.h"

int main()
{
	double a, b, c, x0, x1, dis;
	int roots;
	printf("Input a, b, c: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	roots = solve(a, b, c, &x0, &x1, &dis);
	if (roots == No_roots)
	{
		printf("No real roots\n");
	}
	else if (roots == One_root)
	{
		printf("Result:\n");
		printf("x0 = %.2lf\n", x0);
	}
	else if (roots == Two_roots)
	{
		printf("Result:\n");
		printf("x0 = %.2lf\n", x0);
		printf("x1 = %.2lf\n", x1);
	}
	else if (roots == Fail_input)
	{
		printf("Incorrect input");
	}	
	return 0;
}