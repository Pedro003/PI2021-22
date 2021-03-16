#include <stdio.h>

void repeteChar(char c, int n){
    for(int i=0; i<n; i++)
    putchar(c);
}


void triangulo (int n){
    int i=1;
    while (i<(n*2-1)){
      repeteChar(' ', ((n*2-1)-i)/2);
      repeteChar('#', i);
      repeteChar(' ', ((n*2-1)-i)/2);
      i+=2;
      putchar('\n');
    }
}


