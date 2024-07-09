#include <stdio.h>
#include <string.h>
int factorial(int length){
    int fact;
   for(int i=length;i>1;i--){
        fact*=i; 
   } 
   return fact;
}
int main(){
    int fact=1;
    int count=0;
    char name[15];
    printf("Введіть слово: ");
    gets(name);
    int length =strlen(name);
   // printf("\n%d",lengh);
    printf("\n%d",factorial(length));
    for(int i=0;i<length;i++){
        strstr(name,name[i]);
    }
}