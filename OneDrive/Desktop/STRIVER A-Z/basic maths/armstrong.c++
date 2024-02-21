#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
int orignal=n;
    int sum=0;
    while(n!=0)
    {
        int lastdigit=n%10;
        n=n/10;
        sum=sum+lastdigit*lastdigit*lastdigit;
    }
    cout<<sum;
    if(sum==orignal)
    {
        cout<<"armstrong";
        
    }
    else{
        cout<<"not arms";
    }
    return 0;

}