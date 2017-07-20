#include<stdio.h>
#include<math.h>
#include<string.h>

// ----------------------------------------------
// ----------------------------------------------
//  reference : http://programabad.com/questions/2394/strtok-function-and-const-keyword-in-c
//  http://cpbook.subeen.com/2012/12/probability.html
//  ekhane aage 2 ta word ek kina seta test kore dekha lagbe.
//  ajonno strtok() use kora lagbe. :)
// ----------------------------------------------
// ----------------------------------------------


long long factorial(int num){

    int factorial = 1;

    int k;

    for(k = 1; k <= num; k++){

        factorial = factorial * 5;

    }

    return factorial;

}

int main(){

    int term, i, j;
    char input_sentence[210];

    scanf("%d", &term);

    for(i = 0; i < term; i++){

        scanf(" %[^\n]s", input_sentence);
//        fgets(input_sentence, 200, stdin);




        // -------------------------------------------------
        //
        //      The [] is the scanset character.
        //      [^\n] tells that while the input is not a newline ('\n') take input.
        //
        // -------------------------------------------------

        char *token;

        /* get the first token */
        token = strtok(input_sentence, " ");

        char inputStringArr[21];

        int spaceCount = 0;

        while( token != NULL ){


            token = strtok(NULL, " ");

            spaceCount++;


        }



         // -------------------------------------------------
        //
        //      if give duplicate value then it have to be calculate
        //      then if word = 4, no duplicate value so r = 4,
        //      somabesh ar binnash ta dekha lagbe .....
        //
        // -------------------------------------------------





//        printf("1/%d",(factorial(spaceCount) / factorial()));

    }


}
