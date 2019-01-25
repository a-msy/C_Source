#include <stdio.h>
int main(void){

    int num,i;

    printf("Please input a number:");
    scanf("%d",&num);

    printf("divisor of %d is : ",num);
    for(i=1;i<=num;i++){
       
        if(num % i == 0){//divisor start
            if(i != 1){
                printf(",");
            }
            printf("%d",i);
        }//divisor end
    }

    return 0;
}