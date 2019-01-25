#include <stdio.h>
int main(void){

    char str[512];//string array
    int length,i;
    const char change = 'a'-'A';

    printf("Pleaze input a string:");
    scanf("%s",str);//input

    for(length=0;str[length]!='\0';length++);
    printf("Length:%d\n",length);//length check

    printf("Character codes:");//10
    for(i=0;i<=length;i++){
        if(i==length){
            break;
        }
        else if(i!=0){
            printf(",");
        }
        printf("%d",str[i]);
    }
    printf("\n");

    for(i=0;i<=length;i++){//concatenation
        if(i==length){
            str[i+length]='\0';
        }
        else{
            str[i+length]=str[i]-change;
        }
    }
    printf("Concatenation:%s\n",str);
    
    return 0;
}