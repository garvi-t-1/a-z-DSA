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
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        if (number >= 0 && number < 13) {
            cout << number << " : " << hash[number] << endl;
        } else {
            cout << number << " : Not found" << endl;
        }
    }
    return 0;


}