#include<iostream>
using namespace std;
int frequency(int arr[],int n,int key);
int main()
{
    int i,n,key;
    int arr[20];
    cout<<"enter the size of sorted array"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<"the no. of times the key is repeating is"<<endl;
    cout<<frequency(arr,n,key);


    return 0;
}
int frequency (int arr[],int n,int key)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            count++;
        }
    }
    return count;
}
