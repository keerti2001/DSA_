#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int i=0,j=0,n,t=0;
	char arr1[27],arr2[27];
	printf("enter number of alphabets");
	scanf("%d",&n);
	printf("enter elements in alphabetical order");
	scanf("%s",arr1);
	printf("enter the string whose rank has to be found");
	scanf("%s",arr2);
	for(i=0;i<strlen(arr1);i++)
	{
		if(arr2[j]>arr1[i])
		t=t+pow(2,n-i-1);
		else
		{
			j++;
			t++;
			
		}
	}
	printf("\n%d",t);
	return 0;
}
