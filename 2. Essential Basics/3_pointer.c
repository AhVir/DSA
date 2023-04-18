#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p = (int*) malloc(5*sizeof(int));
    *p = 5;
    *(p+3) = 18;
    for(int i=0; i<5; i++){
        printf("%d\n", *(p+i));
    }


    return 0;
}