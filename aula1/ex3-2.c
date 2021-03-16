#include <stdio.h>

int main(){
    int tamanho;
    int linhas;
    for(tamanho=1;tamanho<=5;tamanho++){
        if(tamanho%2!=0){
        for(linhas=1;linhas<=5;linhas++){
            if(linhas%2!=0){
            printf("#");}
            else{
            printf("_");}
            
            }
        }
        else{
        for(linhas=1;linhas<=5;linhas++){
            if(linhas%2!=0){
            printf("_");}
            else{
            printf("#");}
            
            }
        }
        printf("\n");
    }
return 0;
}