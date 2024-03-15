#include<stdio.h>
int main()
{
  int i,j,search,n,pos;
  
  
  printf("enter the size of array");
  scanf("%d",&n);
  printf("enter the elements:");
  int a[100] ;
 
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    }
    printf("enter the element you want to search");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
     if(search==a[i])
     {
     pos=i+1;
     break;
     }
     }
     if (pos>0)
     printf("element  found at %d:",pos);
     
     else
     printf("element  not found:");
     
     
     
     return 0;
     } 
