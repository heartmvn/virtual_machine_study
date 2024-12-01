#include <stdio.h>

void point_num(int num) {
    if (num == 0) {
        return;
    }

    point_num(num / 10);
    printf("%d ", num % 10);
}

int main() {
    int num;
    scanf("%d", &num);
    if (num == 0) {
        printf("0 ");
    } else {
        point_num(num);
    }
    return 0;
}
