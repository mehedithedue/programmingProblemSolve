#include <stdio.h>
#include <string.h>
#include <math.h>

// ----------------------------------------------
//  http://cpbook.subeen.com/2013/01/shobdo-ultao.html
// ----------------------------------------------


// ----------------------------------------------
//  Function for make the array reverse
// ----------------------------------------------
void arrayMakeReverse(char strArray[])
{
    int k, l;
    char temp;

    if(strlen(strArray) > 1)
    {

        for (k = strlen(strArray) - 1, l = 0; k >= strlen(strArray) / 2; k--, l++)
        {

            temp = strArray[k];
            strArray[k] = strArray[l];
            strArray[l] = temp;

        }
    }

}



int main()
{

    int term, k, i, j;

    char inputString[150];
    char resultString[150];



// -------------------------------------
//  make a new array (resultString) and
//  customize it as atfirst it reverse
//  the main input array So last word
//  will come to first. Now our New Array
//  store befor every space and after
//  found space it reverse the last word
//  in to ordered form. this this answer
//  produced.
// -------------------------------------

    scanf("%d", &term);

    for(k = 1; k <= term; k++)
    {

        scanf(" %[^\n]s", inputString);

        int inputStrLength = strlen(inputString);

        for (i = inputStrLength - 1, j = 0; i >= 0; i--)
        {

            if (inputString[i] != ' ')
            {

                resultString[j] = inputString[i];

                j++;

            }
            else
            {

                if (j > 0)// check if we have something in j or resultString
                {

                    resultString[j] = '\0';

                    arrayMakeReverse(resultString);

                    printf("%s ", resultString);
                    j = 0;

                }

            }

        }

        if (j > 0) // without this block the last word not calculated.
        {


            resultString[j] = '\0';

            arrayMakeReverse(resultString);

            printf("%s\n", resultString);

        }

    }

    return 0;
}
