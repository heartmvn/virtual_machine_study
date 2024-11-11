#include <stdio.h>

int main(void)
{
	int a, b, c, e, sum;
	scanf("%d", &a);
	b = a%10;
	c = (a/10)%10;
	e = (a/100)%10;
	sum = b + c + e;
	printf("%d", sum);
	return 0;
}

