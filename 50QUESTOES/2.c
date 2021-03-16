/*2. Defina um programa que lˆe (usando a fun¸c˜ao scanf
 uma sequˆencia de n´umeros inteiros terminada com o n´umero 0
  e imprime no ecran a m´edia da sequˆencia.*/

#include <stdio.h>

int main(){
int tamanho;
int soma;
int media;
soma=0;
printf("escolha um numero: ");
scanf("%d", &tamanho);
soma=soma+tamanho;
media=1;

while(tamanho!=0){
    printf("escolha um numero: ");
    scanf("%d", &tamanho);
    soma=soma+tamanho;
    media++;
}
media=media-1;
printf("a media de todos os numeros e: %f", (float) soma/media);




    return 0;
}