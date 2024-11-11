#include <stdio.h>

int main(void)
{
	int a, b, c, e;
	//printf("Input number:\n");
	scanf("%d%d%d", &a, &b, &c);
	e = a + b + c;
	printf("%d+%d+%d=%d", a, b, c, e);
	return 0;
}

