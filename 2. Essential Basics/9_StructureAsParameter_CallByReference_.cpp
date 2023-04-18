#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int area(struct rectangle &rec){
    rec.length++;
    printf("%d ", rec.length);
    printf("%d\n", rec.breadth);

    return 0;
}

int main(){
    cout<< "Call By Reference: " << endl;
    struct rectangle r;
    r.length = 10, r.breadth = 9;

    printf("%d\n", area(r));
    printf("%d %d\n", r.length, r.breadth);

    return 0;
}