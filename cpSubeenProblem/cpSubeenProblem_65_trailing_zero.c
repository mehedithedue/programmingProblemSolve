#include <stdio.h>
#include <math.h>
//http://cpbook.subeen.com/2016/02/100.html


//------------------------
//
// Solve basic factrorial problem by recursion :)
//
//------------------------



int main(){

    int term, i;

    int inputNumber, zeroCount, power;
    double power_limit;

    scanf("%d",&term);

    for(i = 0; i < term; i++){

        scanf("%d", &inputNumber);


        zeroCount = 0;

        power_limit = 5;

        power = 2; // though power_limit = 5, power will start from square.


        while(power_limit <= inputNumber){


            zeroCount += inputNumber / power_limit;

            printf("silo:  %lf\n", power_limit);
            power_limit = pow(5, power);

            printf("hoilo: %lf\n", power_limit);

            power++;


        }

        printf("%d\n", zeroCount);

    }

    return 0;
}
