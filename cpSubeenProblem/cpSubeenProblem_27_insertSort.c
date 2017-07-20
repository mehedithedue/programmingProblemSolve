#include <stdio.h>
// http://cpbook.subeen.com/2013/01/sort-them-all.html

// --------------
//
// Not needed but i try insertion sort for practise purpose
//
//---------------



int main(){

    int term, i, j, k;


    int temp;


    scanf("%d",&term);

    for(i = 0; i < term; i++){

        int numberArray[3];

        scanf("%d %d %d",&numberArray[0], &numberArray[1], &numberArray[2]);


        for(j = 1; j < 3; j++){


            int current = numberArray[j];

            k = j-1;

            while(k >= 0 && numberArray[k] > current ){


                numberArray[k+1] = numberArray[k];

                k--;



            }

            numberArray[k+1] = current;



        }

        printf("Case %d: %d %d %d\n",(i+1), numberArray[0], numberArray[1], numberArray[2]);

    }
    return 0;
}
