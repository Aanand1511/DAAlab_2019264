#include<stdio.h>
int binarysearch(int arr[],int i,int j,int k);
int main()
{
    int arr[]={21,22,23,24,25,26,27,28,29,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=28;
    int result= binarysearch(arr,0,n-1,k);
    if (result== -1)
    {
        printf("not found\n");
    }
        else
            {
            printf("the index position is %d\n",result);
            }
    return 0;
}
int binarysearch(int arr[],int i,int j,int k)
{
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else
        {
           if(arr[mid]<k)
           {
               i=mid+1;
           }
           else
            {
               j=mid-1;
            }
        }
    }
    return -1;
}
