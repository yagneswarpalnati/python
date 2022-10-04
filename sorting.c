#include <stdio.h>
void bubblesort(int [],int );
void selectionsort(int [],int);

int main()
{
    int a[10],n;
    printf("enter no of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nentered elements are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    bubblesort(a,n);
    return 0;
}
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nsorted elements are:\n");
    for( i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}
