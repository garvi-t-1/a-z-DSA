#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
    int mx=arr[0];
    for(int i=0;i<n;i++)
    {
        if (mx<arr[i])
        {
            mx=arr[i];

        }
    }
    cout<<mx;
    return 0;
}