#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=100; i++){
        int c=0;
        for(int j=2; j<=i/2; j++){
            if(i%j == 0){
                c++;
                break;
            }
        }
        if(c>0)
            cout<<i<<" Not Prime"<<endl;
        else
            cout<<i<<" Prime"<<endl;
    }
}