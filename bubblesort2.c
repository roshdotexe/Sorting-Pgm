#include <stdio.h>

int main()
{   
    int i,j,n,temp;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
    }
    printf("Sorted array:");
    for(i=0;i<n;i++)
    {
    printf("\t%d",a[i]);
    }
    return 0;
}
