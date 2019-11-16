#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	int r;
	int v,c=0,j;
	char S[40]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str[40],ex[80];
	printf("enter the value of radix");
	scanf("%d",&r);
	for( j=0;j<r;j++)
	{
	str[j]=S[j];
	ex[j]=S[j];
}
for(j=0;j<r;j++)
{
	ex[r-1+j]=S[j];
}
	
	char num[10000],com[10000];
	int i;
	printf("enter the number");
	scanf("%s",num);
	int l=strlen(num);
	for(i=0;i<l;i++)
	{
		v=num[i];
		if(v>=48&&v<=57)
		com[i]=str[r-v+47];
		else if(v>=65&&v<=90)
		com[i]=str[r-v+54];
		else if(v>=97&&v<=122)
		com[i]=str[r-v+86];
	}
	printf("\nthe %d complement of %s is= %s",r-1,num,com);
	printf("\nthe %d complement of %s is= %s",r,num,com);
	return 0;
	
}
