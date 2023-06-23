#include<iostream>
using namespace std;
void append(int a[], int n, int x){
    a[n] = x;
    n++;
}
void insert(int a[],int n, int x, int k){
    int i;
    for (i = 0; i < x; i++)
    {
        a[i] = a[i-1];
    }
    a[i] = k;
    n++;
    
}
int main(){
    int n;
    cout<<"Enter the length of the Array : ";
    cin>>n;
    int a[n];
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
    insert(a,5,3,11);
    cout<<"After inserting the Array is : "<<endl;
    for (int i = 0; i <= n; i++)
    {
        cout<<i<<" : "<<a[i]<<endl;
    }
    
    return 0;
}