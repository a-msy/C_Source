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
    int max_lose_kai=0;
    int i;
    int play_time=0;

    for(i=0;i<1000;i++){
        bet = Fibo(lose);
        balance -= bet;
        
        if(balance >= 599){
            printf("\nyou won 100$\n");
            printf("max_lose:%d\nmax_bet:%d\nmax_minas:%d\n%d kaime\n",max_lose,Fibo(max_lose),max_lose,max_lose_kai+1);
            break;
        }
        ro=rand()%37;
        play_time+=30;
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
                max_lose_kai=i+1;
            }
            printf("lose num:%d\nminas:%d\n",lose-1,minas);
        }

        if(balance > max){
            max = balance;
        }
        printf("now balance:%d\n",balance);
        if(lose>=12 || balance<=200){
            printf("\nmax balance %d\n",max);
            printf("max_lose:%d\nmax_bet:%d\nmax_minas:%d\n%d kaime\n",max_lose,Fibo(max_lose),max_lose,max_lose_kai+1);
            printf("you not lucky．\n");
            break;
        }
    }
    printf("\nPlay time:%dmin\n",play_time/60);
    return 0;
}
