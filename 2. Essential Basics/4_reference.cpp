#include<iostream>
using namespace std;

int main(){
    int a = 55;
    int *p = &a;
    cout << a << endl;
    int &ai = a;  //One variable, one memory allocation but two names of that variable!
    cout << ai << endl;
    *p = 89;
    cout << a << " " << ai << endl;
    cout << "Address: " << &a << " " << &ai << endl;
    ai++;
    cout << a << " " << ai << endl;
    a++;
    cout << a << " " << ai << endl;

    //Reference is useful in parameter passing!

    return 0;
}