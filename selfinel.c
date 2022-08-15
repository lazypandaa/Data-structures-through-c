#include<stdio.h>
void selectionsort(int *list ,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
        if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
    printf("\nAfter sorting: "); 
    for(i=0;i<n;i++)
        printf("%d\t",list[i]);
}
void main()
{
int i, n,list[10];
printf("\nNo of elements: ");
scanf("%d",&n);
printf("\nEnter elements: ");
for(i=0;i<n;i++)
    scanf("%d",&list[i]);
selectionsort(list,n);
}