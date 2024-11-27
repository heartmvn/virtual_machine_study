#include <stdio.h>
#include <math.h>


int plus (int n)
{
    int res = 0, y = 1;
    for ( int i = 1; i <= n; i++)
        res = res + (y++);
    return res;
}


int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", plus(x));
    return 0;
    
    return 0;
}

