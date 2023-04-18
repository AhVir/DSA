#include<iostream>
using namespace std;

class Rectangle{
    private:  //Not accessable, because all these variables are being accessed using class functions!
    int length;
    int breadth;

    public:
    // void initialization(int l, int b){  //Class Function
    Rectangle(int l, int b){  //constructor -> declare & initialize at the same time.
        length = l;
        breadth = b;
    }
    int area(){
        return length*breadth;
    }
    void changelength(int l){
        length = l;
    }
};

int main(){
    Rectangle r(10, 10);  //constructor(declare and initialization at the same time)
    // r.initialization(10, 9); 
    cout << r.area() << endl;

    r.changelength(8);
    cout << r.area() << endl;

    return 0;
}