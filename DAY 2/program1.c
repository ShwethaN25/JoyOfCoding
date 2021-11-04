#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of balloons:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the numbers written on the balloons:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
				a[j]=99;
		}
	}
	printf("The box contains the balloons :");
	for(i=0;i<n;i++)
	{
		if(a[i]!=99)
			printf("%d ",a[i]);
	}
}
