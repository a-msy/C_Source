#include <stdio.h>

#define num 10

void heikin(int *arr){

    int i;

    double sum;

    for( i = 0; i < num; i++ ){
        sum += *arr;
        arr++;
    }

    printf("average:%lf.\n", (sum/num) );
}

void maxmin(int *arr){

    int i, max=*arr, min=*arr;

    for( i=0; i < num; i++ ){
        if( *arr < min ){
            min = *arr;
        }
        else if( max < *arr){
            max = *arr;
        }
        arr++;
    }
    printf("max:%d\nmin:%d\n",max,min);
}

int main(void)
{
    int ten[num]={12,15,91,56,43,72,66,100,99,83};

    heikin(ten);
    maxmin(ten);

    return 0;
}
