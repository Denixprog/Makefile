#include <stdio.h>
#include <math.h>
#include "def.h"

int solve(double a, double b, double c, double *x0, double *x1, double *dis)
{
	double d;
	d = (b * b) - (4 * a * c);
	*dis = d;
	if (a == 0)
	{
		return Fail_input;
	}
	if (d < 0)
	{
		return No_roots;
	}	
	else if (d == 0)
	{
		*x0 = -b / (2 * a);
		return One_root;
	}
	*x0 = (-b + sqrt(d)) / (2 * a);
	*x1 = (-b - sqrt(d)) / (2 * a);
	return Two_roots;
}