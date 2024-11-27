#include <stdio.h>

int middle (int a, int b)
{   
    int res = 1;
        res = (a+b)/2;
    return res;
    }

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d",middle(x,y));
    return 0;
}

