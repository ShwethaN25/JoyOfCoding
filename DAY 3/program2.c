#include<stdio.h>
int main()
{
	int i,k,n,flag=0,sum=0;
	printf("Enter the number of array elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the sum required:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		sum=a[i];
		if(sum==k)
		{
			printf("The sub array is [%d] present at the index %d",sum,i);
			flag=1;
		}
		else
	     {
		for(int j=i+1;j<n;j++)
		{
			
			sum=sum+a[j];
			if(sum==k)
			{
				printf("The sub array is ");
				printf("[ ");
				for(int p=i;p<=j;p++)
					printf("%d ",a[p]);
				printf("]");
				printf(" and the indices range from %d to %d\n",i,j);
				flag=1;
			}
		}
		sum=0;
	    }
	}
	if(flag==0)
		printf("No indices found\n");
}


