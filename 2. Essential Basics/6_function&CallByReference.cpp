#include<iostream>
using namespace std;

void swap(int &x, int &y){   //here, x & y both are reference variables. 10 --> 2 variable names(a, x)
    int temp;                // 20 --> 2 variable names(b, y)
    temp = x;
    x = y;
    y = temp;
}

int main(){
    cout << "Call By Reference" << endl;
    //Reference doesn't take any extra memory. Another name to the existing variable!
    int a, b;
    a = 10, b = 20;

    swap(a, b);
    printf("%d %d\n", a, b);

    return 0;
}