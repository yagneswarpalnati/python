#include <stdio.h>
int linear(int [],int,int);
int binary(int [],int ,int);


int main()
{
    int a[10], n, k,res,mid;
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                mid=a[j];
                a[j]=a[j+1];
                a[j+1]=mid;
            }
        }
    }
    printf(" sorted order are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("enter key:");
    scanf("%d",&k);
    res=linear(a,n,k);
    if(res==-1){
        printf("element not found!!!!!");
    }
    else{
        printf("element found at %d",res);
    }
    printf("\n");
    res=binary(a,n,k);
    if(res==-1){
        printf("element not found!!!!!");
    }
    else{
        printf("element found at %d",res);
    }
    

    return 0;
}
int linear(int a[],int n,int k)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if (a[i]==k)
        {
            return i;
            break;
        }
    }
    return -1;
}
int binary(int a[],int n,int k)
{
    
    int low,high,mid,i,j;
    low=0;
    high=n;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==k)
        {
            return mid;
            break;
        }
        else if(a[mid]<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
       
        
    }
     return -1;
    
}
