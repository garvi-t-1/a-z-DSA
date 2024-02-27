#include<iostream>
using namespace std;
void oneton(int i,int n)
{
    i=0;
    if(i>n)
    {
        return;
    }
    cout<<i<<endl;
    oneton(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    oneton(i,n);

}