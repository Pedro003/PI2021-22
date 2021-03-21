#include <stdio.h>

float multInt2 (int n, float m){
int impares=0;
while(n>=1){
    if(n%2!=0){impares=impares+m;}
    n=n/2;
    m=m*2;
}


return impares;
}



int main(int n, float m){

printf("introduza um valor para n e para m respetivamente: ");    

scanf("%d %f", &n, &m);

printf("o resultado e %d",(int)multInt2 (n,m));
    
    return 0;
}