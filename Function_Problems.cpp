// Function Problems:

// 1.To print prime numbers between two numbers:
/*
#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<=n/2; i++){              //i<sqrt(n) is also possible
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a;
    int b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}
*/

// 2.Fibonacci Sequence:
/*
#include<iostream>
using namespace std;

void fibonacci(int n){
    int term1 = 0;
    int term2 = 1;
    int nextTerm;

    for(int i=1; i<=n; i++){
        cout<<term1<<", ";
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

    return;
}

int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}
*/

// 3.Factorial of a number (Done using recursion):
/*
#include<iostream>
using namespace std;

int factorial(int n){
    for(int i=n; i>=0; i--){
        if(i == 0){
            return 1;
        } else {
            return n * factorial(n-1);
        }
    }
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
*/

// 3.Factorial of a number (Without using recursion):
/*
#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cin>>n;
    int res = factorial(n);
    cout<<res<<endl;
    return 0;
}
*/

// 4.Calculating binary coefficient (nCr):
/*
#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    int r;
    cin>>n>>r;
    int nCr = factorial(n) / (factorial(n-r) * factorial(r));
    cout<<nCr<<endl;
    return 0;
}
*/

// 5.Pascal's Triangle:
/*
#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<factorial(i) / (factorial(i-j) * factorial(j))<<"  ";
        }
        cout<<endl;
    }
}
*/

//-- Advanced Function Problems --

// 1.Sum of first n natural numbers:
/*
#include<iostream>
using namespace std;

int sum(int n){
    int s = 0;
    for(int i=1; i<=n; i++){
        s += i;
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}
*/

// 2.Check whether a triplet is pythagorean triplet or not:
/*
#include<iostream>
using namespace std;

bool check(int x, int y, int z){
    int a = max(x, max(y, z));
    int b;
    int c;

    if(a == x){
        b = y;
        c = z;
    } else if(a == y){
        b = z;
        c = x;
    } else{
        b = x;
        c = y;
    }

    if(a*a == (b*b) + (c*c)){
        return true;
    } else {
        return false;
    }
}

int main(){
    int x, y, z;
    cin>>x>>y>>z;
    if(check(x, y, z)){
        cout<<"Pythagorean Triplet"<<endl;
    } else {
        cout<<"Not a Pythagorean Triplet"<<endl;
    }
    return 0;
}
*/

// 3.Conversions:

// #include <iostream>
// #include <math.h>
// using namespace std;

// int AnythingToDecimal(int n, int b){
//     int ans = 0;
//     int x = 0;
//     while (n > 0){
//         int y = n % 10;
//         ans += pow(b, x) * y;
//         x++;
//         n /= 10;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << "1.Binary to Decimal\n2.Octal to Decimal\n3.Hexadecimal to Decimal\n4.Decimal to binary\n5.Decimal to Octal\n6.Decimal to Hexadecimal\n7.Exit\n";
//     int choice;
//     cin >> choice;
//     switch (choice){
//         case 1: cout << AnythingToDecimal(n, 2) << endl;
//                 break;
//         case 2: cout << AnythingToDecimal(n, 8) << endl;
//                 break;
//         case 3: cout << AnythingToDecimal(n, 16) << endl;
//                 break;
//     }
// }


// 4.Add two Binary Numbers:

#include<iostream>
using namespace std;

long reverse(long sum){
    int ans = 0;
    while(sum > 0){
        int lastDigit = sum % 10;
        ans = ans * 10 + lastDigit;
        sum /= 10;
    }
    return ans;
}

long binaryAddition(long a, long b){
    int rem1, rem2, carry = 0;
    long sum = 0;

    while(a > 0 && b > 0){
        rem1 = a % 2;
        rem2 = b % 2;
        if(rem1 == 0 && rem2 == 0){
            sum = sum * 10 + carry;
            carry = 0;
        }
        else if((rem1 == 1 && rem2 == 0) || (rem1 == 0 && rem2 == 1)){
            if(carry == 1){
                sum = sum * 10 + 0;
                carry = 1;
            } else {
                sum = sum * 10 + 1;
                carry = 0;
            }
        }
        else {
            sum = sum * 10 + carry;
            carry = 1;
        }

        a /= 10;
        b /= 10;
    }

    while(a > 0){
        if(carry == 1){
            if(rem1 == 1){
                sum = sum * 10 + 0;
                carry = 1;
            }
            else { 
                sum = sum * 10 + 1;
                carry = 0;
            }
        }
        else 
            sum = sum * 10 + rem1;
        a /= 10;
    }

    while(b > 0){
        if(carry == 1){
            if(rem2 == 1){
                sum = sum * 10 + 0;
                carry = 1;
            }
            else { 
                sum = sum * 10 + 1;
                carry = 0;
            }
        }
        else 
            sum = sum * 10 + rem2;
        b /= 10;
    }

    if(carry == 1){
        sum = sum * 10 + 1;
    }
    sum = reverse(sum);
    return sum;
}

int main(){
    long a, b;
    cout<<"Enter two binary numbers: ";
    cin>>a>>b;
    long res = binaryAddition(a, b);
    cout<<"Sum = "<<res<<endl;
}