#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,i; 
    int sum = 0;
    scanf("%d%d", &a, &b);
    for (i=a; i <= b; i++){
        sum = (i*i) + sum;
    }
    printf("%d ", sum);
    return 0;
}

