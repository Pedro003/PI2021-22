#include <stdio.h>


void triangulo (int n){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            putchar('#');
            j++;
        }
        putchar('\n');
        i++;
    }
    i=n-1;
    while(i>=1){
        int j=1;
        while(j<=i){
            putchar('#');
            j++;
        }
        putchar('\n');
        i--;    
}
}


