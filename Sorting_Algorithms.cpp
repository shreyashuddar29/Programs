//1)Selection Sort Algorithm:
/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the value of n: ";
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[j]<a[i])
            {
                int temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
            }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
*/


//2)Bubble Sort Algorithm:
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int counter = 1;
    while(counter < n){
        for(int i=0; i<n-counter; i++)
            if(a[i]>a[i+1]){
                int temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
            }
        counter++;
    }
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
*/


//3)Insertion Sort Algorithm:
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++){
        int current = a[i];
        int j = i-1;
        while(a[j]>current && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
*/


//4)Merge Sort Algorithm:
/*
#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++)
        a[i] = arr[l+i];

    for(int i=0; i<n2; i++)
        b[i] = arr[mid+1+i];

    int i = 0;
    int j = 0;
    int k = l;
    
    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++;
            i++;
        } else {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while(i < n1){
        arr[k] = a[i];
        k++;
        i++;
    }

    while(j < n2){
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l < r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    mergeSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
*/


//5)Quick Sort Algorithm:
/*
#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
}

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j=l; j<r; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i+1;
}

void quickSort(int arr[], int l, int r){
    if(l < r){
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
*/


