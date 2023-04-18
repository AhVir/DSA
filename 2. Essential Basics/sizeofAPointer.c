#include<stdio.h>

int main(){
    int i=5;
    int *iPtr = &i;
    char c = 'A';
    char *cPtr = &c;
    double d = 55.4;
    double *dPtr = &d;

    printf("%d %d %d\n", sizeof(iPtr), sizeof(cPtr), sizeof(dPtr));

    return 0;
}