#include <stdio.h>
//http://cpbook.subeen.com/2015/12/factorial.html


//------------------------
//
// Solve basic factrorial problem by recursion :)
//
//------------------------


long long int getFactorial(int inputNumber){


        if(inputNumber > 1){


            return inputNumber * getFactorial(inputNumber-1);

        }else{

            return 1;
        }


}



int main(){

    int term, i;

    int inputNumber;

//    long long int factorial;


    scanf("%d",&term);

    for(i = 0; i < term; i++){


        scanf("%d", &inputNumber);


        printf("%lld\n", getFactorial(inputNumber));


//        factorial = 1;
//
//
//        for(j = inputNumber; j > 1; j--){
//
//            factorial = j * factorial;
//
//            printf("%lld\n", factorial);
//
//        }

//        printf("final : %lld\n", factorial);



    }

    return 0;
}
