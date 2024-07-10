#include <stdio.h>

void input(int amount, int array[]) {
    for(int i = 0; i < amount; i++) {
        printf("Введіть %d число: \n", i + 1);
        scanf("%d", &array[i]);
    }
}
void output(int amount, int array[]) {
    for(int i = 0; i < amount; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int clacLcm(int amount, int array[]) {
    int result = array[0];
    for (int i = 1; i < amount; i++) {
        result = lcm(result, array[i]);
    }
    return result;
}

int main() {
    int p,exit;
    printf("Введіть кількість чисел (від 2 до 20):\n");    
    scanf("%d", &p);

    if (p < 2 || p > 20) {
        printf("Кількість чисел має бути в діапазоні від 2 до 20.\n");
        return 1;
    }

    int a[p];
    input(p, a);

    printf("Введені числа: ");
    output(p, a);

    int nsk = clacLcm(p, a);
    printf("Найменше спільне кратне: %d\n", nsk);
    scanf("%d",&exit);
    return 0;
}
