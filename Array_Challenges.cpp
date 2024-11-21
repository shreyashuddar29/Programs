//1) Max till i:
/*
#include<iostream>
using namespace std;
int main(){
    int n, max = 0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    for(int i=0; i<n; i++){
        if(a[i] > max)
            max = a[i];
        cout<<max<<" ";
    }
    cout<<endl;
    cout<<max<<endl;
    return 0;
}
*/


//2) Sum of all Subarrays:
/*
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum += a[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/


//3) Longest Arithmatic Subarray: From GOOGLE Kick-Start...
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[n];
    int ans = 2, pd = 0, j = 1, cur = 2;
    while(j < n)
    {
        if(pd == a[j] - a[j-1])
            cur++;
        else
        {
            pd = a[j] - a[j-1];
            cur = 2;
        }
        ans = max(ans,cur);
        j++;
    }
    cout<<ans<<endl;
}
*/


//4) Record Breaker: From GOOGLE Kick-Start...
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[n] = -1;
    for(int i=0; i<n; i++)
        cin>>a[i];
    if(n == 1){
        cout<<"1"<<endl;
        return 0;
    } 
    int ans = 0, mx = -1;
    for(int i=0; i<n; i++){
        if(a[i]>mx && a[i]>a[i+1])
            ans++;
        mx = max(mx, a[i]);
    }
    cout<<ans<<endl;
    return 0;
}
*/


//Array Q's asked by top MNCs:

//1) First repeating element (Asked in Amazon and Oracle)
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int idx[n+1];
    for(int i=0; i<n+1; i++)
        idx[i] = -1;
    int min_idx = INT16_MAX;
    for(int i=0; i<n; i++){
        if(idx[a[i]] != -1)
            min_idx = min(min_idx, idx[a[i]]);
        else
            idx[a[i]] = i;
    }
    if(min_idx == INT16_MAX)
        cout<<"-1";
    else
        cout<<min_idx+1;
}
*/

//2) Subarray with given sum
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int s, sum=0;
    cin>>s;
    int sa[n];
    for(int i=0; i<n; i++){
        if(sum == s)
            break;
        else{    
            sum+=a[i];
            sa[i] = a[i];
        }
    }
    for(int i=0; sizeof(sa)/sizeof(int); i++)
        cout<<sa[i];
}