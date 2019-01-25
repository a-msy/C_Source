#include <stdio.h>

int main(void){

    int dol,yen,money,rate;

    printf("Please input your money (yen): ");
    scanf("%d",&money);

    printf("Please input current rate 1$ is ");
    scanf("%d",&rate);

    dol = money/rate;
    yen = money - dol * rate ;

    printf("You got %d $.\nYou have %d yen now.",dol,yen);

    return 0;
}