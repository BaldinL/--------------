#include <stdio.h>
#include <math.h>

int main() {
    int exit;
    float x1, y1, r1, x2, y2, r2;
    printf("Введіть числа x1, y1, r1, x2, y2, r2: \n");
    scanf("%f %f %f %f %f %f", &x1, &y1, &r1, &x2, &y2, &r2);

    float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    if (d == 0 && r1 == r2) {
        printf("-1\n");
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        printf("0\n");
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        printf("1\n");
    } else {
        printf("2\n"); 
    }
    scanf("%d",&exit);
    return 0;
}
