#include<stdio.h>
int main()
{
	int a[10][10],t[10][10],m,n,i,j;
	printf("enter the no of rows and columns:");
	scanf("%d%d",&m,&n);
	printf("Enter the matrix:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			t[j][i]=a[i][j];
	printf("The matrix is rotated 90 degree anticlockwise\n");
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<m;j++)
			printf("%d ",t[i][j]);
	}
}