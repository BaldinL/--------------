#include <stdio.h>

#define MOD 12345

int main() {
    int n,exit;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    if (n < 1 || n >= 10000) {
        printf("Неправильне значення n. Введіть значення від 1 до 9999.\n");
        return 1;
    }

    if (n == 1) {
        printf("Кількість шуканих послідовностей: 2\n"); 
        return 0;
    }

    int end0 = 1;
    int end1 = 1;
    int end11 = 0;

    for (int i = 2; i <= n; i++) {
        int new_end0 = (end0 + end1 + end11) % MOD;
        int new_end1 = end0 % MOD;
        int new_end11 = end1 % MOD;

        end0 = new_end0;
        end1 = new_end1;
        end11 = new_end11;
    }

    int result = (end0 + end1 + end11) % MOD;
    printf("Кількість шуканих послідовностей: %d\n", result);
    scanf("%d",&exit);
    return 0;
}
