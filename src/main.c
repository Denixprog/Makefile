#include <stdio.h>
#include "def.h"
int main()
{
	int a=0, b=0;
	printf ("Enter a: ");
	scanf ("%d", &a);
	printf ("Enter b: ");
	scanf ("%d", &b);
	printf ("Result: %d", sum(a,b));
	return 0;
}