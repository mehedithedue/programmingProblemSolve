#include <stdio.h>
// http://cpbook.subeen.com/2013/01/sort-them-all.html

// --------------
//
// Solve without using array !
//
//---------------


int main(){

    int term, i;

    int firstNumber, secondNumber, thirdNumber;

    int temp;


    scanf("%d",&term);

    for(i = 0; i < term; i++){


        scanf("%d %d %d",&firstNumber, &secondNumber, &thirdNumber);


        if(firstNumber > secondNumber){

            temp = firstNumber;

            firstNumber = secondNumber;

            secondNumber = temp;
        }

        if(secondNumber > thirdNumber){

            temp = thirdNumber;

            thirdNumber = secondNumber;

            secondNumber = temp;        }

        if(firstNumber > secondNumber){

            temp = firstNumber;

            firstNumber = secondNumber;

            secondNumber = temp;
        }


        printf("Case %d: %d %d %d\n",(i+1), firstNumber, secondNumber, thirdNumber);

    }

    return 0;
}
