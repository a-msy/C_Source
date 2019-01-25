#include <stdio.h>
#include <math.h>

#define PI 3.1415

int flg=0;

void calc_sin(); /*sin計算*/
void calc_cos(); /*cos計算*/
void calc_tan(); /*tan計算*/
void number_error();  /*エラー*/
void quit_prog();  /*終了文*/
double deg_rad(double deg);/*degree をradianに変換*/

int main(void){

    int num=0;

    printf("\n********  trigonometric function calc  ********\n\n");/*見やすくする*/

    while(flg != 1){ /*－１、１～３以外が入力されたときに戻って処理を行わせるため*/

        printf("Input a function number :\n");
        printf("1) sin, 2) cos, 3) tan  --> ");
        scanf("%d",&num);/*関数選択*/

        switch(num){

            case -1:
                quit_prog();
            break;

            case 1:
                calc_sin();
            break;

            case 2:
                calc_cos();
            break;

            case 3:
                calc_tan();
            break;

            default:
                number_error();
            break;
        }
    
    }

    return 0;
}

void calc_sin(){

    double a;

    printf("Input the parameter(degree): ");
    scanf("%lf",&a);/*度数入力*/
    printf("sin(%.2lf) is %.4lf .\n\n",a, sin( deg_rad(a) ) );/*出力*/

}

void calc_cos(){

    double b;

    printf("Input the parameter(degree): ");
    scanf("%lf",&b);
    printf("cos(%.2lf) is %.4lf .\n\n",b, cos( deg_rad(b) ) );

}

void calc_tan(){

    double c;

    printf("Input the parameter(degree): ");
    scanf("%lf",&c);
    printf("tan(%.2lf) is %.4lf .\n\n",c, tan( deg_rad(c) ) );

}

void number_error(){

    printf("Input a correct function number from 1 to 3\n\n");

}

void quit_prog(){

    flg = 1;
    printf("********  The function calculator quits.  ********\n\n");

}

double deg_rad(double deg){
    return deg * PI / 180.0;
}