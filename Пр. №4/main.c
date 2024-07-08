#include <stdio.h>
int main(){
   int n,m,count,exit;
   printf("Введіть число n: \n");
   scanf("%d",&n);
   for(m=1;m<=n;m++){
    if(n%m==n/m)count++;
   }
   printf("Кількість рівних дільників числа %d : %d",n,count);
   scanf("%d",&exit);
}