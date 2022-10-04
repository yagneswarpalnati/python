#include<stdio.h>
void selectionsort(int [],int);
int main()
{
    int a[10],n,i;
    printf("enter no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    selectionsort(a,n);
    return 0;
}
void selectionsort(int a[],int n)
{
    int i,j,temp,k;
    for(i=0;i<n;i++)
    {
        temp=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[temp])
            {
                temp=j;
            }
        }
        k=a[i];
        a[i]=a[temp];
        a[temp]=k;
    }
    printf("sorted elements are...:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
