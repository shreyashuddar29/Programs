#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,n=0,r,p;
    cout<<"Enter a number:";
    cin>>num;
    p=num;
    while(num>0)
    {
        r=num%10;
        n+=pow(r,3);
        num/=10;
    }
    if(p==n)
        cout<<"It is an armstrong number"<<endl;
    else
        cout<<"It is not an armstrong number"<<endl;
}