#include <stdio.h>
#define SN 8

void output(char *filename,int *temp,int *number){
	int i=0;
	FILE *fp;
	fp=fopen(filename,"w");

	while(i < SN){
		printf("%d,%d\n",*number,*temp);
		if(*temp < 0 || 100 < *temp) fprintf(fp,"%d,%s\n",*number,"X");
		else if(*temp < 60 ) fprintf(fp,"%d,%s\n",*number,"F");
		else if(*temp < 70) fprintf(fp,"%d,%s\n",*number,"C");
		else if(*temp < 80) fprintf(fp,"%d,%s\n",*number,"B");
		else if(*temp < 90) fprintf(fp,"%d,%s\n",*number,"A");
		else fprintf(fp,"%d,%s\n",*number,"A+");
		i++;
		temp++;
		number++;
	}
	fclose(fp);
}

int main (void)
{
	FILE *fp;
	int i;
	int num[SN],eng[SN],math[SN],japa[SN],sci[SN],civ[SN];
	
	fp=fopen("score.csv","r");
	if(fp==NULL) return 1;
	for(i=0;i<=SN;i++){
		fscanf(fp,"%d,%d,%d,%d,%d,%d\n",&num[i],&eng[i],&math[i],&japa[i],&sci[i],&civ[i]);
	}
	fclose(fp);

	output("grade_Eng.csv",eng,num);
	output("grade_Math.csv",math,num);
	output("grade_Japa.csv",japa,num);
	output("grade_Civ.csv",civ,num);
	output("grade_Sci.csv",sci,num);

	return 0;
}
