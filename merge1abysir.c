#include <stdio.h>
int a[20],b[20];
int main()
{
    int i,n;
    printf("\t\t\tMergesort single array\n");
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter Elements of a: ");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(0,n);
    printf("after sorting\n");
    for ( i=0;i<=n;i++)
    {
     printf("%d\n", a[i]);
    }
return 0;       
}
void sort(int low,int high)
{
    int mid;
    if(low<high)
    {   mid=(low+high)/2;
        sort(low,mid);
        sort(mid+1,high);
        merge(low,mid,high);
    }
}
void merge(int low,int mid,int high)
{
    int i,j,k;
    i=low;
    j=mid+1;
    for(k=low;i<=mid&&j<=high;k++)
    {
        if(a[i]<=a[j])
            b[k]=a[i++];
        else
            b[k]=a[j++]; 
    }
    while(i<=mid)
    {
        b[k++]=a[i++];
    }
    while(j<=high)
    {
        b[k++]=a[j++];
    }

    for(i=0;i<=high;i++)
    {
        a[i]=b[i];
        
    }
}
