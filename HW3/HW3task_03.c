#include <stdio.h>

int main(void)
{
	int a, b, c;
	float e;
	//printf("Input number:\n");
	scanf("%d%d%d", &a, &b, &c);
	e = a + b + c;
	e = (float)e/3;
	printf("%.2f", e);
	return 0;
}

