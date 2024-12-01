#include <stdio.h>

void func (int x)
{
    if (x > 1)
        func(x / 2);
    printf("%d", x%2);
}

int main()
{
    int x;
    scanf("%d", &x);
    func(x);
        return 0;
}

