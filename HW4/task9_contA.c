#include <stdio.h>
#include <math.h>


int main(int argc, char **argv)
{
	int a,b,c, d, e, max;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	
	max = a > b ? a : b;
	max = max > c ? max : c;
	max = max > d ? max : d;
	max = max > e ? max : e;
	
	printf("%d", max);

	return 0;
}




