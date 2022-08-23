#include<stdio.h>
void quicksort(int a[],int,int);
void main()
{
  int a[50],i,n;
  printf("enter no of elements: ");
  scanf("%d",&n);
  printf("enter the elements: ");
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
  quicksort(a,0,n-1);
  printf("AFTER SORTING: ");
  for(i=0;i<n;i++)
      printf("%d\t",a[i]);
  }
void quicksort(int a[],int l,int h)
{
   int pivot,i,j,t;
   if(l<h)
   {
   i=l;
   pivot=l;
   j=h;
   while(i<j)
   {
   while(a[i]<=a[pivot]&&i<=h)
   {
   i++;
   }
   while(a[j]>a[pivot]&&j>=l)
   {
   j--;
   }
   if(i<j)
   {
   t=a[i];
   a[i]=a[j];
   a[j]=t;
   }
   }
   t=a[j];
   a[j]=a[pivot];
   a[pivot]=t;
   quicksort(a,l,j-1);
   quicksort(a,j+1,h);
   }
   }
