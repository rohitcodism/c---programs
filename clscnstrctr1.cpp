#include<iostream>
using namespace std;
class Rectangle {
    private :
    int length;
    int breadth;
    public : 
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    int area(){
        return length * breadth;
    }
    int changelength(int l){
        length = l;
        return length;
    }
};
int main(){
    
}