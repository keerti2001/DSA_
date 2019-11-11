#include<stdio.h>

int main()
{
	printf("enter the number of elements");
	int n;
	scanf("%d",&n);
	int A[n],lis[n];
	printf("\nenter :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		lis[i]=1;
	}
	for(int j=1;j<n;j++)
	{
		for(int k=0;k<j;k++)
		{
			if(A[k]<A[j] && lis[j]<lis[k]+1)
			{
				lis[j]=lis[k]+1;
			}
		}
	}int max=lis[0];
	for(int m=0;m<n;m++)
	{
	  if(max<lis[m])
	  max=lis[m];	
	}
	printf("\nlargest length=%d",max);
	return 0;
}
