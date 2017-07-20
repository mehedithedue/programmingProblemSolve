#include <stdio.h>
#include <stdbool.h>

//http://cpbook.subeen.com/2012/11/square-box-1.html

int main(){
    int term, i, squerLenght;
    int col, row;
    scanf("%d",&term);

    for(i = 0; i < term; i++){
        scanf("%d",&squerLenght);
        for(col = 0; col < squerLenght; col++){
            for(row = 0; row < squerLenght; row++){
                printf("*");
            }
            printf("\n");
        }
    }
}
