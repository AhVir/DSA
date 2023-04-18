#include<stdio.h>

struct arr{
    int ar[5];
    int n;
};

void testing(struct arr t2){
    t2.ar[3] = -3;
    for(int i=0; i<5; i++) printf("%d ", t2.ar[i]);
    puts("");
}

int main(){
    struct arr t = {{1, 23, 4, 5, 11}, 5};  

    testing(t);
    for(int i=0; i<5; i++) printf("%d ", t.ar[i]);

    return 0;
}