#include <stdio.h>

int func (int x)
{
    printf("%d ", x % 10);
    if (x < 10)
        return x;
    else
        return func(x / 10);

}

int main()
{
    int x;
    scanf("%d", &x);
    func(x);
    return 0;
}

