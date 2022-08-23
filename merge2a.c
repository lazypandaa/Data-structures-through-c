#include <stdio.h>
int main()
{
    int a[20],b[20],c[20],i,j,n,k=0;
    printf("\t\t\tMergesort\n");
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter Elements of a: ");
    for(i=0;n>i;i++)
        scanf("%d",&a[i]);
    printf("Enter Elements of b: ");
    for(i=0;n>i;i++)
        scanf("%d",&b[i]);
    i=0;
    j=0;
    while(n>i&&n>j)
    {
        if(a[i]<b[j])
             c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    while(n>i)
        c[k++]=a[i++];
    while(n>j)
        c[k++]=b[j++];
    
    for(i=0;n+n>i;i++)
        printf("%d\t",c[i]);
    return 0;
}
