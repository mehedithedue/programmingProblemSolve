#include<stdio.h>
#include<string.h>

// ----------------------------------------------
//  reference : http://cpbook.subeen.com/2016/02/blog-post_37.html
// ----------------------------------------------


int main(){

    int term, i, j, k, l;

    char input_sentence[10001];

    int countLetter[52]; // CountLetter as A-Z = 25 char and a-z = 25 char = 50 char, 2 extra



    scanf("%d", &term);

    for(i = 0; i < term; i++){


//        scanf(" %[^\n]s", input_sentence);
        scanf(" %[^\n]s", input_sentence);

        // ----------------------------------------------
        //  Make All CountLetter = 0 as initial value
        // ----------------------------------------------


        for(k = 0; k <= 51; k++){

            countLetter[k] = 0;

        }

        int nth_letter = 0;


        for(j = 0; j < strlen(input_sentence); j++){


           if(input_sentence[j] != ' '){

                // ----------------------------------------------
                //  if A - Z then - 64(A), and if a - z then - 64(A) - 6.
                //  because Z = 90, but a != 91. a = 97. so there is
                //  6 difference in small and capital serial in aschi.
                // ----------------------------------------------


                if(input_sentence[j] >= 65 && input_sentence[j] <= 90){

                    nth_letter = input_sentence[j] - 'A';

                } else if(input_sentence[j] >= 97 && input_sentence[j] <= 122){

                    nth_letter = input_sentence[j] - 'A' - 6;

                }


                countLetter[nth_letter]++;

           }


        }

        for(l = 0; l < 52; l++){

            if(countLetter[l] != 0){

                // ----------------------------------------------
                //  if l <= 25 mean when l is for all 25 capital letter
                //  then ok, just l(int) + 65(A). but when its more then
                //  25 mean its smaller so we must add 6 which we minus
                //  before in nth_letter. it goes l(int) + 65(A) + 6.
                // ----------------------------------------------



                if(l <= 25){

                    printf("%c = %d\n", (l + 'A'), countLetter[l]);

                }else{

                    printf("%c = %d\n", (l + 'A' + 6), countLetter[l]);

                }



            }
        }




    }

    return 0;
}
