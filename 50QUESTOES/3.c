/*3. Defina um programa que lˆe (usando a fun¸c˜ao scanf uma sequˆencia
 de n´umeros inteiros terminada com o n´umero 0 e imprime no ecran o segundo maior elemento.
*/

#include<stdio.h>

int main(){
int num, max, max2;

printf("\nIntroduza um valor inteiro: ");
scanf("%d", &num);
max = num;


printf("\nIntroduza o segundo valor inteiro: ");
scanf("%d", &num);
if(num <= max) max2 = num;
else{
    max2 = max;
    max = num;
}



while(num != 0){
    printf("\nIntroduza outro valor inteiro: ");
    scanf("%d", &num);
    if(max<num){
    max2 =max;
    max = num;
    }
    else if(num > max2) max2 = num;  
}
printf("O segundo maior numero lido foi %d.\n", max2);




    return 0;
}