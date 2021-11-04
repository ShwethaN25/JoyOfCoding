#include<stdio.h>

int main()
{
    int a[10],i,j,k,t,n,flag=0; 
    printf("Enter the number of array elements:"); 
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0; i<n; i++) 
        scanf("%d",&a[i]);
    printf("Enter the sum required: "); 
    scanf("%d",&k); 
    for(i=0; i<n; i++)
    {
        for(j=i+1;i<n;i++)
        {
            t=a[i]+a[j];
            if(t==k)
            {
                printf("%d + %d= %d\n", a[i],a[j],k); 
                printf("Indices are found at %d and %d\n",i,j); 
                flag=1;
                
            }
        }
    } 
    if(flag==0)
        printf("No indices found\n");
}
