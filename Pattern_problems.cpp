//Pattern Problems:

//1.A simple rectangle pattern:
/* 
    * * * * *
    * * * * *
    * * * * * 
    * * * * * 
    * * * * *
*/
/*#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"Enter the values of m and n:";
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            cout<<"*  ";
        cout<<'\n';
    }
}*/


//2.A hollow rectangle pattern:
/*
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
*/
/*#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"Enter the values of m and n:";
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        if(i==1||i==m||j==1||j==n)
            cout<<"*  ";
        else
            cout<<"   ";
        cout<<endl;
    }
}*/


//3.Inverted half pyramid:
/*
    *  *  *  *  *  
    *  *  *  *
    *  *  *
    *  *
    *
*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
            cout<<"*  ";
        cout<<endl;
    }
}*/


//4.Mirror of half pyramid:
/*
                *
             *  *
          *  *  *
       *  *  *  *
    *  *  *  *  *
*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j,s;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
            cout<<"   ";
        for(j=1;j<=i;j++)
            cout<<"*  ";
        cout<<endl;
    }
}*/


//5.Half pyramid using numbers:
/*
    1
    2  2
    3  3  3
    4  4  4  4
    5  5  5  5  5
*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<i<<"  ";
        cout<<endl;
    }
}*/


//6.Floyd's Triangle:
/*
    1
    2       3
    4       5       6
    7       8       9       10
    11      12      13      14      15
*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count=1;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count<<"\t";
            count++;
        }
        cout<<endl;
    }
}*/


//7.Butterfly Pattern:
/*
  *             *
  * *         * *
  * * *     * * *
  * * * * * * * *
  * * * * * * * *
  * * *     * * *
  * *         * *
  *             *  
*/
/*#include<iostream>
using namespace std;
int main(){
    int n,i,j,s;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++)
            cout<<"* ";
        int space = 2*(n-i);
        for(s=1; s<=space; s++)
            cout<<"  ";
        for(j=1; j<=i; j++)
            cout<<"* ";
        cout<<endl;
    }

    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++)
            cout<<"* ";
        int space = 2*(n-i);
        for(s=1; s<=space; s++)
            cout<<"  ";
        for(j=1; j<=i; j++)
            cout<<"* ";
        cout<<endl;
    }
}*/

//--Advanced Pattern Problems--

//8.Inverted number pattern:
/*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++)
            cout<<j<<" ";
        cout<<endl;
    }
}*/


//9.Binary triangle:
/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0)
                cout<<"1 ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}*/

//10.Rhombus Pattern:
/*
            * * * * *
          * * * * *
        * * * * *
      * * * * *
    * * * * *
*/
/*#include<iostream>
using namespace std;
int main(){
    int n,i,j,s;
    cout<<"Enter the values of n:";
    cin>>n;
    for(i=1; i<=n; i++){
        for(s=1; s<=n-i; s++)
            cout<<"  ";
        for(j=1; j<=n; j++)
            cout<<"* ";
        cout<<endl;
    }
}*/


//11.Number Pattern:
/*
            1
          1   2
        1   2   3
      1   2   3   4
    1   2   3   4   5
*/
/*#include<iostream>
using namespace std;
int main(){
    int n,i,j,s;
    
    cout<<"Enter the values of n:";
    cin>>n;
    for(i=1; i<=n; i++){
        for(s=1; s<=n-i; s++)
            cout<<"  ";
        for(j=1; j<=i; j++)
            cout<<j<<"   ";
        cout<<endl;
    }
}*/


//12.Palindromic Pattern:
/*
            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5  
*/
/*#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter the values of n:";
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++)
            cout<<"  ";
        k = i;
        for( ; j<=n; j++)
            cout<<k--<<" ";
        k=2;
        for( ; j<=n+i-1; j++)
            cout<<k++<<" ";
        cout<<endl;
    }
}*/


//13.Star Pattern:
/*
          *
        * * *
      * * * * *
    * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/
/*#include<iostream>
using namespace std;
int main(){
    int n,i,j,s;
    cout<<"Enter the values of n:";
    cin>>n;
    for(i=1; i<=n; i++){
        for(s=1; s<=n-i; s++)
            cout<<"  ";
        for(j=1; j<=2*i-1; j++)
            cout<<"* ";
        cout<<endl;
    }
    for(i=n; i>=1; i--){
        for(s=1; s<=n-i; s++)
            cout<<"  ";
        for(j=1; j<=2*i-1; j++)
            cout<<"* ";
        cout<<endl;
    }
}*/


//14.Zig-Zag Pattern:
/*
        *       *
      *   *   *   *
    *       *       *
*/
/*#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the values of n:";      //n => number of stars
    cin>>n;
    for(i=1; i<=3; i++){        //Number of rows is fixed i.e. = 3
        for(j=1; j<=n; j++){
            if(((i+j)%4==0) || (i==2 && j%4==0))
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}*/

