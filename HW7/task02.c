#include <stdio.h>

int func (int x)
{
    if (x <= 1)//условие остановки
        return 1;
    x = x + func (x - 1);
        return x;//возвращаем в начало рекурсии последнее полученное значние
}

int main(void)
{
    int x;
    scanf("%d", &x);//скан числа
    printf("%d", func(x));//печать результата
    return 0;
}


