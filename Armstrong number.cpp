#include<iostream>
using namespace std;
int main()
{
    int n,x,sum=0,r;
    cout<<"Enter any number: "<<endl;
    cin>>n;

    x=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==x)
        cout<<x<<" is armstrong number"<<endl;
    else
        cout<<x<<" is not armstrong number"<<endl;

    return 0;
}
