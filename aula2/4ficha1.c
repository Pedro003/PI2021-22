#include<stdio.h>
#include<math.h>

void circ(int n){
    for(int linha=1; linha <= 2*n+1; linha++){
        for(int coluna=1; coluna <= 2*n+1; coluna++){
            int x= pow(linha-n-1, 2);
            int y= pow (coluna-n-1, 2);
            int soma = x + y;

            if(soma <= pow(n, 2))
            putchar('#');
            else
            putchar(' ');
        }
        putchar('\n');
    }
}

int main(){
    for(int i=1;i<=5;i++){
circ(i+3);
putchar('\n');putchar('\n');
    }

    return 0;
}