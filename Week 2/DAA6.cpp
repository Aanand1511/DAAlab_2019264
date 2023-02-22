#include <iostream>

using namespace std;
int difference(int arr[],int n,int key)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr[i]-arr[j]==key||arr[j]-arr[i]==key)
            {
                count ++;
            }
        }
    }
    return count;
}
int main()
{
    int i,arr[20],n,key;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<"no. of pairs that has difference equal to the given key are"<<endl;
    cout<<difference(arr,n,key);
    return 0;
}
