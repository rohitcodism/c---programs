#include<iostream>
using namespace std;

void isMissing(int a[], int n){
    int sum = (n*(n+1))/2;
    int sum2, i;
    for(i = 0;i<n;i++){
        sum2  += a[i];
    }
    cout<<"The missing element is : "<<(sum2-sum)<<endl;
}

int main(){
    int n, a[100], i;
    cout<<"enter the length of the array : "<<endl;
    cin>>n;
    if(n<=100){
        cout<<"enter the array elements : "<<endl;
        for(i = 0;i<n;i++){
            cin>>a[i];
        }
    }
    isMissing(a, a[i-1]);
    return 0;
}