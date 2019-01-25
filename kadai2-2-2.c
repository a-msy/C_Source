#include <stdio.h> /* kadai-2-2-2.c */
struct Student {
char name[80];
int point;
int flg;
};

void compare_point(struct Student List[], int count, struct Student me)
{
    int k;
    for(k=0;k<count;k++){
        if(List[k].point > me.point){
            List[k].flg = 1 ;
        }
    }
}

int main(void)
{
    struct Student studentlist[] = {{"Ichiro", 92},{"Jiro", 97},{"Saburo", 65},{"Shiro", 77},{"Goro", 88},{"Rokuro", 73} };
    struct Student me;
    int i, count;
    printf("Name: "); scanf("%s", me.name);
    printf("Point: "); scanf("%d", &me.point);
    compare_point(studentlist, 6, me);
    count = 0;
    for (i=0;i<6;i++){
        if(studentlist[i].flg == 1){
            if (count != 0) printf(", ");
            printf("%s",studentlist[i].name);
            count++;
        }
    }
    if (count == 0) printf("No one");
    printf(" got higher points than %s.\n", me.name);
    return 0;
}