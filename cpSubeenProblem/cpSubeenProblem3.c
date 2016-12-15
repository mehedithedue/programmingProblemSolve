#include<stdio.h>
#include<string.h>
// its not completed yet!!
int main(){

    char inputNumber[10000000];
    int terms;
    int n;
    scanf("%d\n",&terms);
    for(n = 0; n < terms; n++){
        int i;
        fgets(inputNumber,10000000, stdin);
        int countSpace = 0;
        int strlength = strlen(inputNumber);
        for(i = 0; i < strlength; i++){
            if(inputNumber[i] == 32){
                countSpace++;
            }
        }
        printf("%d\n",(countSpace+1));
    }
}

