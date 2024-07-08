#include <stdio.h>
void input(int amount,int array[]){
 for(int i=0;i<amount;i++){
        printf("Введіть %d число: \n",i+1);
        scanf("%d",&array[i]);
    }
}
void output(int amount, int array[]){
for(int i=0;i<amount;i++){
        printf("%d ",array[i]);
    }
}
int main(){
    int exit;
    int p, nsk;
    printf("Введіть кількість чисел(від 2 до 20):\n");    
    scanf("%d",&p);
    int a[p];
    input(p,a);
    output(p,a);
    
scanf("%d",&exit);
    return 0;
}