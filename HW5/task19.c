#include <stdio.h>

int main(int argc, char **argv)
{
    int n, sum, count;
    scanf("%d", &n);
    while(n!=0){
        count++;
        sum+= n%10;
        n = n /10;
        }
    if (sum == 10)
        printf("YES");
    else 
        printf("NO");
    return 0;
}

