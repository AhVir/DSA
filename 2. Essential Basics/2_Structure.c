#include<stdio.h>

struct triangle{
    int length;
    int breadth;
}tri1;

struct {
    int height;
    int width;
}tri100;

int main(){
    tri1.length = 5;
    tri1.breadth = 9;

    printf("%d\n", tri1.breadth);

    tri100.height = 1000;
    tri100.width = 500;

    printf("%d\n", tri100);

    struct triangle t = {10, 11};
    printf("%d %d", t.length, t.breadth);

    return 0;
}