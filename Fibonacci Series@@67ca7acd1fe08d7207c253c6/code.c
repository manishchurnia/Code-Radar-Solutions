#include <stdio.h>

int fiboncci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return fiboncci(n-1) + fiboncci(n-2);
}

int main(){
    int a;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        printf("%d ", fiboncci(i));
    }
    return 0;
}