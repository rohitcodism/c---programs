#include<iostream>
using namespace std;
int * fun(int n){
    int * p;
    p = new int[n];
    return p;
}
int main(){
    int *A;
    A=fun(5);
    cout<<*A<<endl;
}