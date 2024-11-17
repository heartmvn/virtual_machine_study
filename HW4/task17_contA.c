#include <stdio.h>
#include <math.h>


int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	if (a<=2 || a==12){
		printf("winter");
	}
		
	else if (3<=a && a<=5){
		printf("spring");
	}
	
	else if (6<=a && a<=8){
		printf("summer");
	}
	
	else{
		printf("NO");
	}
	
	return 0;
}

a + b > c
b + c > a
a + c > b
