#include <stdio.h>
#include <math.h>


int main(int argc, char **argv)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a<b && b<c){
		printf("YES");
	}
		
	else {
		printf("NO");
	}
	
	return 0;
}

