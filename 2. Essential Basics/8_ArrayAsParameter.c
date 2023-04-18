#include<stdio.h>
#include<stdlib.h>

int* arr(int sz){
    int *p;
    p = (int*)malloc(sz*sizeof(int));
    return p;
}

int main(){
    int *A;

    A = arr(5);

    for(int i=0; i<5; i++){
        *(A+i) = 5;
    }

    for(int i=0; i<5; i++){
        printf("%d\n", *(A+i));
    }

    return 0;
}