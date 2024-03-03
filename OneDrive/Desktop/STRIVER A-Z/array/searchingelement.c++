#include<iostream>
using namespace std;
int main ()
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
    cout<< endl;
    int x;
    cout<<"enter th element to find in the array:";
    cin >> x;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            flag++;
        }
        

    }
    if(flag>0)
        {
            cout<<"the element is present";
        }
        else{
            cout<<"not present";
        }



    return 0;
}
