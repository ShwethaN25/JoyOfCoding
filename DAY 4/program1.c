#include<stdio.h>
int main()
{
	char s[50],temp[10];
	int len=0,j=0;
	printf("Enter a string:");
	gets(s);
	for(int i=0;s[i]!='\0';i++)
		len++;
	temp[j]=s[0];
	for(int i=1;i<len;i++)
	{
		if(s[i]==' ') 
		{
			i++;
			if(s[i]<97)
				temp[++j]=s[i];
		}
	}
	printf("The strig is abbreviated to : ");
	for(int i=0;i<=j;i++)
		printf("%c",temp[i]);
}
