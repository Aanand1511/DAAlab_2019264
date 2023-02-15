#include<stdio.h>
int main()
{
  int arr[20];
  int i=0,k,n;
  printf("the size of the array\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }
  printf("enter the key\n");
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
  if(arr[i]==k)
  {
  printf("the index position is %d\n",i);
  }
  }
}
