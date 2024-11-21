//1)Linear Search Algorithm:
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter how many numbers ? ";
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter a key: ";
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
        if(a[i]==key)
        {
            cout<<"FOUND at "<<i<<endl;
            exit(0);
        }
    cout<<"NOT FOUND"<<endl;
}


//2)Binary Search Algorithm:
#include<iostream>
using namespace std;
int main()
{
    cout<<"How many numbers? ";
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the key: ";
    int key;
    cin>>key;
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
        {
            cout<<"FOUND at "<<mid<<endl;
            exit(0);
        }
        else
            if(a[mid]>key)
                high=mid-1;
            else
                low=mid+1;
    }
    cout<<"NOT FOUND"<<endl;
}