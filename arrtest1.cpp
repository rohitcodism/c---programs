#include<iostream>
using namespace std;
void append(int a[], int n, int x){
    a[n] = x;
    n++;
}
void insert(int a[],int n, int x, int k){
    int i;
    n++;
    for (i = n-1; i > x; i--)
    {
        a[i] = a[i-1];
    }
    a[i] = k;

    
}
int del(int a[], int x, int n){
    int z = a[x];
    for(int i = x;i<n-1;i++){
        a[i] = a[i+1];
    }
    n--;
    return z;
}
int main(){
    int a[100];
    int n;
    cout<<"Enter the length of the Array : ";
    cin>>n;
    cout<<"Enter the array elements : "<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    // append(a,5,4);
    // cout<<"The Array after appending : "<<endl;
    // for(int i =0;i<=n;i++){
    //     cout<<a[i]<<endl;
    // }
    // insert(a,5,3,11);
    int x = del(a,3,n);
    cout<<"The Deleted element is : "<<x<<endl<<"The Array Is : "<<endl;
    for(int i = 0;i<n-1;i++)
        cout<<a[i]<<endl;
    
    
    return 0;
}