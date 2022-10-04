#include<stdio.h>
void insertionsort(int [],int );
int main()
{
    int a[10],n,i;
    printf("enter no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nelements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    insertionsort(a,n);
    return 0;
}
void insertionsort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
            }
        }
        a[j+1]=temp;
    }
    printf("\nsorted elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
