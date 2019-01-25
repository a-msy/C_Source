#include <stdio.h> /* kadai2-2-1.c */

void capital_character(char *s, char c);
void remove_character(char *s);

int main(void)
{
char s[100], c;

printf("Input original string: ");
fgets(s,sizeof(s),stdin);

printf("Input lower character (to be capitalized): ");
c = getchar();

capital_character(s, c);
printf("After capitalization: %s\n", s);

remove_character(s);
printf("After removing capital characters: %s\n", s);

return 0;
}

void capital_character(char *s, char c)
{
 char *p;
 p = s;
 while( *p != '\0'){
     if((*p==c)){
         *p = *p - ('a'-'A');
     }
     p++;
    }
}

void remove_character(char *s)
{
 char *p;
 p = s;
 while( *s != '\0'){
    p=s;
    if((*p >= 'A') && (*p <='Z')){
        while(*p != '\0'){
            *p = *(p + 1);
            p++;
            }
    }
    else {
        s++;
    }
}
}
