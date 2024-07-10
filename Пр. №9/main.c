#include <stdio.h>
#include <stdlib.h>

int minSteps(int x, int y) {
    int steps = 0;
    int diff = y - x;

    while (diff > 0) {
        if (diff % 2 == 0) {
            diff /= 2;
        } else {
            diff -= 1;
        }
        steps++;
    }

    return steps;
}

int main() {
    int x, y, exit;
    printf("Введіть значення x і y: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("Мінімальна кількість кроків: %d\n", x - y);
    } else {
        int result = minSteps(x, y);
        printf("Мінімальна кількість кроків: %d\n", result);
    }
    scanf("%d",&exit);
    return 0;
}
