#include<iostream>
using namespace std;
int fun(int n){
    while (n>0){
        cout<<n<<endl;
        n--;
    }
    return 0;
}
int main(){
    int a=3;
    cout<<fun(a)<<endl;
}