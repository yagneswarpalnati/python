#include <stdio.h>
void selectionsort(int[],int);
void insertionsort(int[],int);
void mergesort(int[],int,int);
void merge(int [],int,int,int);
int large(int [],int);
int noofdigits(int);
void radixsort(int [],int n);
void bubblesort(int [],int);
void quicksort(int[],int,int);
int partition(int[],int,int);
int main()
{
    int a[10],n,i;
    printf(" enter size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    a[i]=99;
    quicksort(a,0,n-1);
     printf("sorted elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}
void selectionsort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        
    }
   
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
            else
            {
                break;
            }
        }
        a[j+1]=temp;
    }
    printf("sorted elements:"); 
}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    int b[10];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }
    if(i>mid)
    {
        while(j<=high)
        {
        b[k]=a[j];
        k++;
        j++;
        }
        
    }
    else
    {
        while(i<=mid)
        {
        b[k]=a[i];
        k++;
        i++;
        }
    }
    for(i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}
int large(int a[],int n)
{
    int i,j,temp,k;
    temp=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>temp)
        {
            temp=a[i];
        }
    }
    return temp;
}
int noofdigits(int n)
{
    int c=0;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    return c;
}
void radixsort(int a[],int n)
{
    int i,j,k;
    int bucket[10][10],bc[10];
    int rem=0,d=1;
    int l=large(a,n);
    int pass,p=noofdigits(l);
    printf("%d \n",p);
    for(pass=0;pass<p;pass++)
    {
        for(i=0;i<10;i++)
        {
            bc[i]=0;
        }
        for(i=0;i<n;i++)
        {
            rem=(a[i]/d)%10;
            
            bucket[rem][bc[rem]]=a[i];
            bc[rem]=bc[rem]+1;
        }
        i=0;
        for(k=0;k<10;k++)
        {
            for(j=0;j<bc[k];j++)
            {
                a[i]=bucket[k][j];
                i++;
            }
        }
        d=d*10;
    }
}
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
    }
}
void quicksort(int a[],int low,int high)
{
    int j;
    if(low<high)
    {
        j=partition(a,low,high+1);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
        
    }
}
int partition(int a[],int low,int high)
{
    int i=low,j=high;
    int temp,pivot;
    pivot=a[low];
    while(i<j)
    {
        while(a[i]<=pivot && i<high)
        {
            i++;
        }
        while(a[j]>pivot&&j>low)
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    
    return j;
    
}
