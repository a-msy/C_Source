#include <stdio.h>

int my_strlen(char ss[]);
void str_convert_upper_lower(char ss[], int len);
void invstr(char ss[], int len);
int flg=0;

int main(void){   
    int len;
    char ss[100];

    printf("Input a string: ");
    scanf("%s", ss);
    len = my_strlen(ss);

    str_convert_upper_lower(ss, len);
    printf("%s\n", ss);

    flg = 1;
    str_convert_upper_lower(ss, len);
    printf("%s\n", ss);

    invstr(ss, len);
    printf("%s\n", ss);

    return 0;
}

int my_strlen(char ss[]){
    int i=0;
    for(i=0;ss[i]!='\0';i++);
    return i;
}

void str_convert_upper_lower(char ss[], int len){
    const char change = 'a'-'A';
    int i;
    if(flg == 1 ){
        for(i=0;i<len;i++){
            if((ss[i]>= 'a') && (ss[i]<='z')){
                ss[i] = ss[i] - change;
            }   
            else if((ss[i]>= 'A') && (ss[i]<='Z')){
                ss[i] = ss[i] + change;
            }
            else {
            }
        }
    }
}

void invstr(char ss[], int len){
    char temp;
    int first=0,last=len-1;

        while(first < last){            
        	temp = ss[first];
        	ss[first] = ss[last];
        	ss[last] = temp;

        	first++;
        	last--;
    	}
}