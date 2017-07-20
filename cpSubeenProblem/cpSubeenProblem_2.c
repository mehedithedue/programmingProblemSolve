#include<stdio.h>

int main(){

    int inputNumber;
    int terms;

    int posetiveNumberCount;
    int negetiveNumberCount;

    while(scanf("%d",&terms) != EOF){
       int i;
        posetiveNumberCount = 0;
        negetiveNumberCount = 0;

       for(i = 0; i < terms; i++){
        scanf("%d",&inputNumber);
           if(inputNumber > 0){
            posetiveNumberCount++;
           }else if(inputNumber < 0){
            negetiveNumberCount++;
           }
        }
        printf("%d %d",posetiveNumberCount,negetiveNumberCount);
    }

}
