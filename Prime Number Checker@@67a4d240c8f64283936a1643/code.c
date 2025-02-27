#include <stdio.h>

int prime_check(int num){
      if (num <= 1){
        printf("0");
    }
    else if (num == 2 || num == 3 || num == 5 || num == 7){
        printf("1");
    }
    else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0){
        printf("0");
    }
    else{
        printf("1");
    }
}
int main (){
    int n;
    scanf("%d", &n);
    printf(prime_check(n));
    return 0;
}