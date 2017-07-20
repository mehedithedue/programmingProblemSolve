#include<stdio.h>

#include<string.h>

// ----------------------------------------------
//  reference : http://cpbook.subeen.com/2016/02/blog-post_73.html
// ----------------------------------------------


int main(){

    int term, i, j;

    char input_sentence[10001];

    char input_letter[2];

    char checked_letter[2];


    scanf("%d", &term);

    for(i = 0; i < term; i++){


        scanf(" %[^\n]s", input_sentence);

        scanf(" %c", input_letter);

        int count = 0;

        for(j = 0; j < strlen(input_sentence); j++){

            // ----------------------------------------------
            //  if input_letter is capital then make him small letter,
            //  because the problem have 'l' and 'L' has same output.
            // ----------------------------------------------


            if(input_letter[0] >= 65 && input_letter[0] <= 90){

                checked_letter[0] = input_letter[0] + 32;

            }else{

                checked_letter[0] = input_letter[0];

            }

            if( checked_letter[0] == input_sentence[j]){

                count++;

            }
            if( checked_letter[0] == input_sentence[j] + 32){

                count++;

            }

        }


        if(count == 0){

            printf("'%c' is not present\n", input_letter[0]);

        }else{

            printf("Occurrence of '%c' in '%s' = %d\n", checked_letter[0], input_sentence, count);

        }

    }

    return 0;
}
