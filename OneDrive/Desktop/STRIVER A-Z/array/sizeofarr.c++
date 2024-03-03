#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,5,6,7,8,91,2,3,4,5,6,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<n;
}