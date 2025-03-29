#include <stdio.h>

int fibonacciSeries(int a){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    return fibonacci(a-1) + fibonacci(a-2);
}


int main(){
    int n;
    scanf("%d", &n);
    printf("%d ", fibonacciSeries(n));
    return 0;
}