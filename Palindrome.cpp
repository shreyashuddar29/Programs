#include<iostream>
using namespace std;
int main(){
    int n, rem, rev=0;
    cin>>n;
    int t = n;
    do{
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }while(n!=0);
    if(t == rev)
        cout<<"palindrome";
    else
        cout<<"not palindrome";
}