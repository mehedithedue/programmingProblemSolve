#include <stdio.h>
#include <string.h>
#include <math.h>

// ----------------------------------------------
//  http://cpbook.subeen.com/2016/02/blog-post_89.html
// ----------------------------------------------



int main()
{

    int term, k, i;

    char inputString[1000];
// -------------------------------------

    scanf("%d", &term);

    for(k = 1; k <= term; k++)
    {

        scanf(" %[^\n]s", inputString);

        int count = 0;

        int inputStrLength = strlen(inputString);

        for (i = inputStrLength - 1; i >= 0; i--)
        {

            if(inputString[i] <= 90 && inputString[i] >= 65 )
            {

                inputString[i]  += 32;

            }

            if(inputString[i] == 97 || inputString[i] == 101 || inputString[i] == 105 || inputString[i] == 111 || inputString[i] == 117){

                count++;

            }


        }

        printf("Number of vowels = %d\n", count);

    }

    return 0;
}
