#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],i,n,ele,found=0;
 printf("Enter no.of elements: ");
 scanf("%d",&n);
 printf("enter elements: ");
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 printf("enter to search: ");
 scanf("%d",&ele);
 for(i=0;i<n;i++)
    if(ele==a[i])
        {
        printf("\n The elements at %d position",i);
        found=1;
        break;
        }
if(found==0)
printf("\n search is unsuccessful");

}
