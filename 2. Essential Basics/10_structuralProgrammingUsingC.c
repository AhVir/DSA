#include<stdio.h>

struct rectangle{
    int len;
    int bread;
};

void initialize(struct rectangle* r, int l, int b){
    r->len = l;
    r->bread = b;
}

int area(struct rectangle r){
    return r.len * r.bread;
}

void changeLength(struct rectangle* r, int len){
    r->len = len;
}

int main(){
    struct rectangle rec;

    initialize(&rec, 10, 20);
    printf("Area : %d\n", area(rec));
    changeLength(&rec, 20);

    printf("Area : %d\n", area(rec));

    return 0;
}