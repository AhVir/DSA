#include<iostream>
using namespace std;

// class Arithmatic{
//     private:
//     int a;
//     int b;

//     public:
//     Arithmatic(int a, int b);
//     int add();
//     int sub();
// };

// Arithmatic::Arithmatic(int a, int b){
//     this->a = a;
//     (*this).b = b;
// }

// int Arithmatic::add(){
//     int c;
//     c = a+b;
//     return c;
// }

// int Arithmatic::sub(){
//     int c;
//     c = a-b;
//     return c;
// }

//Creating generic class using Template
template<class x>
class Arithmatic{
    private:
    x a;
    x b;

    public:
    // Arithmatic();
    Arithmatic(x a, x b);
    x add();
    x sub();
};

template<class x>
Arithmatic<x>::Arithmatic(x a, x b){
    this->a = a;
    (*this).b = b;
}

template<class x>
x Arithmatic<x>::add(){    //need to add the template parameter with the class name
    x c;
    c = a+b;
    return c;
}

template<class x>
x Arithmatic<x>::sub(){
    int c;
    c = a-b;
    return c;
}

int main(){
    Arithmatic<int> a(10, 20);  //same class is working for float and integer also!
    cout << a.add() << endl;

    Arithmatic<float> ar(1.2, 3.5); //Data type is being mentioned as template.
    cout << ar.add() << endl;

    return 0;
}