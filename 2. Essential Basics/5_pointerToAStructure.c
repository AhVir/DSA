#include<stdio.h>
#include<stdlib.h>

struct rectangle{
    int length;
    int breadth;
};

int main(){
    /*
    struct rectangle r;
    r.length = 2;
    r.breadth = 5;

    printf("%d\n", r.length);
    struct rectangle *rPtr = &r;
    (*rPtr).length = 33;

    printf("%d\n", r.length);
    rPtr->length = 99;

    printf("%d\n", r.length);
    // printf("%d", sizeof(rPtr));
    */

    printf("%d\n", sizeof(struct rectangle));

    struct rectangle* ptr;

    ptr = (struct rectangle*)malloc(sizeof(struct rectangle));
    ptr->length = 12;
    ptr->breadth = 21;

    printf("%d %d\n", (*ptr).length, (*ptr).breadth);

    return 0;
}