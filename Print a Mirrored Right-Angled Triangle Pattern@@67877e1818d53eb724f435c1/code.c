#include <stdio.h>

int main (){
    int n,i,j,k;
    scanf("%d", &n);
    for(i=1; i<=n; i++){ // for moving in next row
        for(j=1; j<=n-i; j++){
            printf(" ");// for printing spaces
        }
        for(k=1; k<=i; k++){
            printf("*"); // for printing stars
        }
        printf("\n");
    }
    return 0;
}