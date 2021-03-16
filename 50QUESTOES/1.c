/*1. Defina um programa que lˆe (usando a fun¸c˜ao scanf uma sequˆencia de n´umeros inteiros
 terminada com o n´umero 0 e imprime no ecran o maior elemento da sequˆencia.
*/

#include<stdio.h>

int main(){
int num, max;

printf("\nIntroduza um valor inteiro: ");
scanf("%d", &num);
max = num;

while(num != 0){
    printf("\nIntroduza um valor inteiro: ");
    scanf("%d", &num);
    if(max<num) max = num; 
}
printf("O maior numero lido foi %d.\n", max);
    return 0;
}