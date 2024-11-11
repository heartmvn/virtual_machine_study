#include <stdio.h>

int main(void)
{
	int a, b, c, e, pr;
	scanf("%d", &a);
	b = a%10;
	c = (a/10)%10;
	e = (a/100)%10;
	pr = b * c * e;
	printf("%d", pr);
	return 0;
}

