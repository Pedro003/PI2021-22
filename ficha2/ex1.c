#include <stdio.h>

/*     Apresente uma definição da função float multInt1 (int n, float m) baseada nesta
observação: a uma variável r (inicialmente com o valor 0) será somado o valor de m,
n vezes. Essa variável r vai ter os valores 0, m, 2*m, 3*m, . . . , e no final terá o valor
desejado n*m.    */


float multInt1 (int n, float m){
    int r=0;
    for(int i=0; i<=n; i++) r=r+(i*m);
printf("%f",(float)r);
    return 0;
}



int main(int n, float m){
    printf("da um valor a n:");
    scanf("%d", &n);
    printf("da um valor a m:");
    scanf("%f", &m);
        multInt1(n,m);
    return 0;
}