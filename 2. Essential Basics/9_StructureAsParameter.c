#include<stdio.h>

struct rectangle{
    int length;
    int breadth;
};

int area(struct rectangle rec){
    rec.length++;
    printf("%d ", rec.length);
    printf("%d\n", rec.breadth);

    return 0;
}

void changingStructureValue(struct rectangle* rPtr){
    rPtr->length = 13;
    (*rPtr).breadth = 18;
}

int main(){
    struct rectangle r;
    r.length = 10, r.breadth = 9;
    printf("%d\n", area(r));
    printf("%d %d\n", r.length, r.breadth);

    struct rectangle recc;
    recc.length = 11;
    recc.breadth = 9;

    // struct rectangle *reccPtr = &recc;

    printf("%d %d\n", recc.length, recc.breadth);
    // changingStructureValue(reccPtr);
    changingStructureValue(&recc);
    printf("%d %d\n", recc.length, recc.breadth);

    return 0;
}