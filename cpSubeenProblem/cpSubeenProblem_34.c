#include<stdio.h>
#include<string.h>
#include<math.h>

// ----------------------------------------------
//  http://cpbook.subeen.com/2013/01/shomoy-bohiya-jay.html
// ----------------------------------------------


int main(){

    int term, i, j, k, l;

    int inputNumber;

    int minute = 60;

    int hour = 60 * minute;

    int day = 24 * hour;

    int month = 30 * day;

    int year = 12 * month;



    scanf("%d", &term);

    for(i = 1; i <= term; i++){

        scanf("%d",&inputNumber);


        int yearAmount = inputNumber / year;
        int yearReminder = inputNumber - (yearAmount * year);

        int monthAmount = yearReminder / month;
        int monthReminder = yearReminder - (monthAmount * month);

        int dayAmount = monthReminder / day;
        int hourReminder = monthReminder - (dayAmount * day);

        int hourAmount = hourReminder / hour;
        int minuteReminder = hourReminder - (hourAmount * hour);

        int minuteAmount = minuteReminder / minute;
        int secondReminder = minuteReminder - (minuteAmount * minute);


        printf("Case %d:", i);

        if(yearAmount != 0){

            if(yearAmount == 1){

                printf(" %d year", yearAmount);

            }else{

                printf(" %d years", yearAmount);

            }

        } if(monthAmount != 0){

             if(monthAmount == 1){

                printf(" %d month",monthAmount);

            }else{

                printf(" %d months",monthAmount);

            }


        } if(dayAmount != 0){


             if(dayAmount == 1){

                printf(" %d day",dayAmount);

            }else{

                printf(" %d days",dayAmount);

            }


        } if(hourAmount != 0){

             if(hourAmount == 1){

                printf(" %d hour",hourAmount);

            }else{

                printf(" %d hours",hourAmount);

            }


        } if(minuteAmount != 0){

             if(minuteAmount == 1){

                printf(" %d minute",minuteAmount);

            }else{

                printf(" %d minutes",minuteAmount);

            }


        } if(secondReminder != 0){

             if(secondReminder == 1){

                printf(" %d second",secondReminder);

            }else{

                printf(" %d seconds",secondReminder);

            }


        }

        printf("\n");


//        if(inputNumber > 0 && inputNumber < minute){
//
//            if(inputNumber == 1){
//
//                printf("Case %d: %d second\n",i , inputNumber);
//
//            }else{
//
//                printf("Case %d: %d seconds\n",i , inputNumber);
//
//            }
//
//
//        }else if(inputNumber >= minute && inputNumber < hour){
//
//            int minuteAmount = inputNumber / minute;
//            int secondReminder = inputNumber - (minuteAmount * 60);
//
//            if(minuteAmount == 1){
//
//                if(secondReminder == 1){
//
//                    printf("Case %d: %d minute %d second\n",i , minuteAmount, secondReminder);
//
//                }else if(secondReminder == 0){
//
//                    printf("Case %d: %d minute",i , minuteAmount);
//
//                }else {
//
//                    printf("Case %d: %d minute %d seconds\n",i , minuteAmount, secondReminder);
//
//                }
//
//            }else{
//
//                if(secondReminder == 1){
//
//                    printf("Case %d: %d minutes %d second\n",i , minuteAmount, secondReminder);
//
//                }else if(secondReminder == 0){
//
//                    printf("Case %d: %d minutes",i , minuteAmount);
//
//                }else {
//
//                    printf("Case %d: %d minutes %d seconds\n",i , minuteAmount, secondReminder);
//
//                }
//
//            }
//
//        }else if(inputNumber >= hour && inputNumber < day){
//
//            printf("hour\n");
//
//        }else if(inputNumber >= day && inputNumber < month){
//
//            printf("day\n");
//
//        }else if(inputNumber >= month && inputNumber < year){
//
//            printf("month\n");
//
//        }else if(inputNumber >= year){
//
//            printf("year\n");
//
//        }




//        int reminder = inputNumber % 31556926 ;
//
//        while(inputNumber % reminder < 60)
//        {
//
//            printf("Vagfol : %d\n", (inputNumber / 31556926));
//            printf("Vagses : %d\n", reminder);
//
//            inputNumber = reminder;
//        }






    }

    return 0;
}
