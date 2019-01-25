#include <stdio.h>

void disp(int data[],int count);
double calc_ave(int data[],int count);
void binarize(int data[],int count,double threshold);

int main(void){

    int st_num[]={0,9,4,3,0,5,0,9}, count=8;
    double th;

    th=calc_ave(st_num, count);
    printf("threshold:%.3f\n",th);
    disp(st_num, count);
    binarize(st_num,count,th);
    disp(st_num, count);

    return 0;
}

void disp(int data[],int count){
    int i;

    for(i=0;i<count;i++){
        printf("%d",data[i]);
    }
    printf("\n");
}

double calc_ave(int data[],int count){
    int sum=0,i;
    
    for(i=0;i<count;i++){
        sum += data[i];
    }
    return (double)sum/count ;
}

void binarize(int data[],int count,double threshold){
    int  i;
    for(i=0;i<count;i++){
        if(data[i] < threshold){
            data[i] = 0;
        }
        else {
            data[i] = 1;
        }
    }
}