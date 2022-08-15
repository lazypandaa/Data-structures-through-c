#include<stdio.h>
void insertionsort(int *list,int n);
void main()
{ 
int i,n,list[10];
printf("\n number of elements to sort: "); 
scanf("%d",&n); 
printf("\nEnter the elements : "); 
for(i=0;i<n;i++) 
scanf("%d",&list[i]);
insertionsort(list,n);
}
void insertionsort(int *list,int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
{
    temp=list[i];
    j=i;
    while(list[j-1]>temp&&j>0)
    {
        list[j]=list[j-1];
        j=j-1;
    }
    list[j]=temp;
} 
printf("\n after sorting the elements are: "); 
for(i=0;i<n;i++) 
    printf("%d\t",list[i]);
}