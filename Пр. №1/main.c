#include <stdio.h>

int main()
{
    float t1,t2,t3;
    printf("Введіть три значення\n");
    printf("Перше: \n");
    scanf("%f",&t1);
    printf("Друге: \n");
    scanf("%f",&t2);
    printf("Третьє: \n");
    scanf("%f",&t3);
    float res = (t1+t2+t3)/3;
    printf("Час, необхідний для з'їдання пирога : %.2f",res);
    return 0;
}