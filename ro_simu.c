#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long Fibo(int n)
{
    unsigned long f;        /* フィボナッチ数をしまう */

    switch (n) {
        case 1:
        case 2:             /* nが１か２なら */
            f = 1L;         /* fは１ */
            break;
        default:            /* それ以外は再帰呼び出し */
            f = Fibo(n - 1) + Fibo(n - 2);
            break;
    }
    return (f);             /*  fの値をリターン */
}

int main(void){
    srand((unsigned int) time(NULL));
    int balance=500;
    int set = 300;
    int ro=0;
    int bet=1;
    int lose=1;
    int max = 0;
    int max_lose = 1;
    int minas = 0;

    for(int i=0;i<1000;i++){
        bet = Fibo(lose);
        balance -= bet;
        if(lose>=13 || bet>balance){
            printf("\nmax balance %d\n",max);
            printf("max_lose:%d\nmax_bet:%d\n",max_lose,Fibo(max_lose));
            printf("you not lucky．\n");
            return 0;
        }
        if(balance >= 599){
            printf("\nyou won 600\n");
            printf("max_lose:%d\nmax_bet:%d\n",max_lose,Fibo(max_lose));
            return 0;
        }
        ro=rand()%38;
        printf("--%d kaime--------\n",i+1);
        printf("bet:%d\n",bet);

        printf("ro:%d\n",ro);
        if(1<=ro && ro<=12){
            minas=0;
            lose = 1;
            bet *= 3;
            balance += bet;
            printf("win:%d\n",bet);
        }
        else{
            lose++;
            minas+=bet;
            if(lose>max_lose){
                max_lose=lose;
            }
            printf("lose num:%d\nminas:%d\n",lose-1,minas);
        }

        if(balance > max){
            max = balance;
        }
        printf("now balance:%d\n",balance);
    }
    printf("max_lose:%d\nmax_bet:%d\nmax_minas:%d\n",max_lose,Fibo(max_lose));
    return 0;
}
