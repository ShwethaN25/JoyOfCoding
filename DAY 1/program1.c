#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;i++)
        {
            if(a[i]==a[j])
            {
                printf("Array is not distinct\n");
                exit(0);
            }
        }
    }
    printf("Array is distinct\n");
}
