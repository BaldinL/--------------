#include <stdio.h>
#include <math.h>
int main(){
    int exit;
    float x1,x2,y1,y2, result;
    printf("Введіть число x1: ");
    scanf("%f",&x1);
    printf("\nВведіть число y1: ");
    scanf("%f",&y1);
    printf("\nВведіть число x2: ");
    scanf("%f",&x2);
    printf("\nВведіть число y2: ");
    scanf("%f",&y2);
    result= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.6f",result);
    scanf("%d",&exit);
}