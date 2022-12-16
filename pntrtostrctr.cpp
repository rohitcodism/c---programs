//#include<iostream>
//using namespace std;
//struct r{
  //  int length;
    //int breadth;
//};
//int main(){
  //  struct r x={10,5};
    //struct r *p=&x;
    //(*p).length=20;
    //(*p).breadth=15;
//}
#include<iostream>
using namespace std;
struct r{
int length;
int breadth;
};
int main(){
    struct r *p;
    p=(struct r *)malloc(sizeof(struct r));
    (*p).length=15;
    (*p).breadth=20;
}