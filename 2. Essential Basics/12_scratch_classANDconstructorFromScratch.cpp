#include<iostream>
using namespace std;

class rectangle{
    private:
    int len;
    int bread;

    public:
    rectangle(){
        len = 4;
        bread = 6;
    }
    rectangle(int l, int b){   //constructor overloadding.
        len = l, bread = b;
    }
    int area();
    int perimeter();
    int getLength();
    void setLength(int l);
    ~rectangle();
};

int rectangle::area(){
    return len*bread;
}
int rectangle::perimeter(){
    return 2*len*bread;
}
int rectangle::getLength(){
    return len;
}
void rectangle::setLength(int l){
    len = l;
}
rectangle::~rectangle(){
    cout<<"Destructor" << endl;
}

int main(){
    rectangle r;
    cout << r.area() << endl;
    rectangle rec(5, 2);
    cout << rec.area() << endl;

    return 0;
}