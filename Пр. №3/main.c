#include <stdio.h>

void genNum(int p, char *number, int position) {
    if (position == p) {
        number[position] = '\0';
        printf("%s\n", number);
        return;
    }

    if (position >= 2) {
        if (number[position - 1] == number[position - 2]) {
            if (number[position - 1] == '5') {
                number[position] = '9';
                genNum(p, number, position + 1);
            } else {
                number[position] = '5';
                genNum(p, number, position + 1);
            }
            return;
        }
    }

    number[position] = '5';
    genNum(p, number, position + 1);
    number[position] = '9';
    genNum(p, number, position + 1);
}

int main() {
    int p,exit;
    printf("Введіть число: ");
    scanf("%d", &p);

    if (p > 30 || p < 1) {
        printf("Помилка, p повинно бути від 1 до 30.\n");
        return 1;
    }

    char number[p + 1];  
    genNum(p, number, 0);
    scanf("%d",&exit);
    return 0;
}
