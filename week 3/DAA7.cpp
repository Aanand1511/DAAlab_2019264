#include <iostream>

using namespace std;
void display_array(int arr[],int n);
void insertion_sort(int arr[],int n);
int main()
{
    cout<<"enter the no. of test cases"<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        int arr[20],n;
        cout<<"enter the size of the array"<<endl;
        cin>>n;
        cout<<"enter the elements in the array"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"before sorting"<<endl;
        display_array(arr,n);
         cout<<"after sorting"<<endl;
        insertion_sort(arr,n);
        display_array(arr,n);
    }
    return 0;
}
void insertion_sort(int arr[],int n)
{
    for (int i=1;i<=n;i++)
    {
        int j=i-1;
        int key;
        key=arr[i];
        while(j>=0&&arr[j]>key)
        {
            int temp;
            temp=key;
            key=arr[i];
            arr[i]=temp;
            i--;
        }
        arr[j+1]=key;
    }
}
void display_array(int arr[],int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
}
