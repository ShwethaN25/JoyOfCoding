#include<stdio.h>
int main()
{
    int n,i,count;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n],freq[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]); 
        freq[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
              count++;
              freq[j]=0;
            }
        }
        if(freq[i]!=0)
            freq[i]=count;
    }
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0)
          printf("frequency of %d is %d\n",a[i],freq[i]);
    }
}