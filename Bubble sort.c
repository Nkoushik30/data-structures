#include<stdio.h>
int main()
{
  int  i,j,n,temp;
  printf("enter the value of n:");
  scanf("%d",&n);
  printf("enter the values in array");
  int a[100];
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
  for(j=0;j<n-i-1;j++){
  if(a[j]>a[j+1]){
  temp=a[j];
  a[j]=a[j+1];
  a[j+1]=temp;
  }
  }
  }
  for(i=0;i<n;i++){
  printf("%d\n",a[i]);
  }
  return 0;
  }
