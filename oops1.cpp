/* for an empty class 1 byte of memory is allocated */
/*there  are three types of access modifier : 1. public 2. private(by default) 3. protected*/
/*for a private access modifiers we use get and set function to access it or manupulate it. */
/*when we create an object everytime constructor is called, this is called deafault constructor . It has no parameters and no return value. */
#include<iostream>
using namespace std;
class hero{
    //class members
    private:
    char name[100];
    int health;
    public: 
    int level;

    hero(){
        cout<<"constructor is called"<<endl;
    }

    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(int l){
        level = l;
    }
};
int main(){
    // hero ramesh;
    // ramesh.level = 8;
    // //cout<<"size : "<<sizeof(ramesh)<<endl;
    // // cout<<"health is: "<<ramesh.health<<endl;
    // cout<<"level is :"<<ramesh.level<<endl;
    // cout<<"health is: "<<ramesh.gethealth()<<endl;
    // ramesh.sethealth(100);
    //     hero *h = new hero;
    //     h->sethealth(100);
    //     h->setlevel(12);
    //     cout<<"level is : "<<h->level<<"  health is : "<<h->gethealth()<<endl;

    /*object created dynamically*/
    cout<<"hi"<<endl;
    hero *h1 = new hero;
    cout<<"hello"<<endl;
}