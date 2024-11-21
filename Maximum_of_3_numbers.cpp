#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers:";
    cin>>a>>b>>c;
    if(a<b)
    {
        if(b<c)
            cout<<"MAX="<<c<<endl;
        else
            cout<<"MAX="<<b<<endl;
    }
    else
        if(a<c)
            cout<<"MAX="<<c<<endl;
        else
            cout<<"MAX="<<a<<endl;
    return 0;
}
