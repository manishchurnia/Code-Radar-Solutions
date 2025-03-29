#include <stdio.h>

void fibonacciSeries(int a){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    return fibonacciSeries(a-1) + fibonacciSeries(a-2);
}


int main(){
    int n;
    scanf("%d", &n);
    fibonacciSeries(n);
    return 0;
}