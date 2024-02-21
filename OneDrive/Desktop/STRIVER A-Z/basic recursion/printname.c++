#include<iostream>
using namespace std;
void printname(int i,int n)
{
    if(i>n)
    return;
    cout<<"garvit"<<endl;
    printname(i+1,n);

}
int main()
{
    int n;
    int i=1;
    cin>>n;
    printname(i,n);
}