#include <stdio.h>
#include <math.h>
//http://cpbook.subeen.com/2012/11/square-number.html


int main(){

    int term, i;


    double inputNumber;


    scanf("%d",&term);

    for(i = 0; i < term; i++){


        scanf("%lf", &inputNumber);


        double sqrtNumber = sqrt(inputNumber);


        int sqrtNumberInt = sqrt(inputNumber);

        if ((sqrtNumber - sqrtNumberInt) == 0.0000){

            printf("YES\n");

        }else{

            printf("NO\n");

        }


    }

    return 0;
}
