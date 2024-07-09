#include <stdio.h>
#include <string.h>


int fact(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int angrmCount(const char *word) {
    int length = strlen(word);
    int count[256] = {0};
    for (int i = 0; i < length; i++) {
        count[(char)word[i]]++;
    }
    int denominator = 1;
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            denominator *= fact(count[i]);
        }
    }
    return fact(length) / denominator;
}
int main() {
    int exit;
    char word[15];
    printf("Введіть слово: ");
    scanf("%14s", word);

   int anagram = angrmCount(word);

    printf("Кількість анаграм: %d\n", anagram);
scanf("%d",&exit);
    return 0;
}