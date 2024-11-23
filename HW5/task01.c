#include <stdio.h>

int main(int argc, char **argv)
{
    int i, p;
    //printf_s("Vvedite chislo\n");
    scanf("%d", &p);
    
    for (i=1; i<=p; i++){
        if (p==100)
        break;
        printf("%d %d %d\n",i, i*i, i*i*i);
    }
    return 0;
}

